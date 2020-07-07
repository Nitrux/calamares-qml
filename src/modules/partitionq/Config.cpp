/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2019-2020, Adriaan de Groot <groot@kde.org>
 *   Copyright 2020, Camilo Higuita <milo.h@aol.com> *
 *
 *   Calamares is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Calamares is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Calamares. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Config.h"
#include "core/KPMHelpers.h"
#include "core/OsproberEntry.h"
#include "core/PartUtils.h"
#include "core/PartitionActions.h"
#include "core/PartitionCoreModule.h"
#include "core/PartitionInfo.h"
#include "core/PartitionModel.h"

#include "gui/ScanningDialog.h"

#include "GlobalStorage.h"
#include "JobQueue.h"
#include "partition/PartitionIterator.h"
#include "partition/PartitionQuery.h"
#include "utils/Retranslator.h"
#include "utils/Units.h"

#include "Branding.h"
#include "utils/CalamaresUtilsGui.h"

#include <kpmcore/core/device.h>
#include <kpmcore/core/partition.h>
#ifdef WITH_KPMCORE4API
#include <kpmcore/core/softwareraid.h>
#endif

#include <QFutureWatcher>
#include <QtConcurrent/QtConcurrent>

using PartitionActions::Choices::SwapChoice;
using CalamaresUtils::Partition::PartitionIterator;
using CalamaresUtils::Partition::isPartitionFreeSpace;
using CalamaresUtils::Partition::findPartitionByPath;


DeviceInfo::DeviceInfo(QObject *parent) : QObject(parent)
{
}

void
DeviceInfo::setPartitionTableType( PartitionTable::TableType type )
{
    m_tableType = type;
    QString typeString = PartitionTable::tableTypeToName( m_tableType ).toUpper();

    // fix up if the name shouldn't be uppercase:
    switch ( m_tableType )
    {
        case PartitionTable::msdos:
        case PartitionTable::msdos_sectorbased:
            typeString = "MBR";
            break;
        case PartitionTable::loop:
            typeString = "loop";
            break;
        case PartitionTable::mac:
            typeString = "Mac";
            break;
        case PartitionTable::amiga:
            typeString = "Amiga";
            break;
        case PartitionTable::sun:
            typeString = "Sun";
            break;
        case PartitionTable::unknownTableType:
            typeString = " ? ";
    }


    QString toolTipString = tr( "This device has a <strong>%1</strong> partition "
    "table." )
    .arg( typeString );

    switch ( m_tableType )
    {
        case PartitionTable::loop:
            toolTipString = tr( "This is a <strong>loop</strong> "
            "device.<br><br>"
            "It is a pseudo-device with no partition table "
            "that makes a file accessible as a block device. "
            "This kind of setup usually only contains a single filesystem." );
            break;
        case PartitionTable::unknownTableType:
            toolTipString = tr( "This installer <strong>cannot detect a partition table</strong> on the "
            "selected storage device.<br><br>"
            "The device either has no partition "
            "table, or the partition table is corrupted or of an unknown "
            "type.<br>"
            "This installer can create a new partition table for you, "
            "either automatically, or through the manual partitioning "
            "page." );
            break;
        case PartitionTable::gpt:
            toolTipString += tr( "<br><br>This is the recommended partition table type for modern "
            "systems which start from an <strong>EFI</strong> boot "
            "environment." );
            break;
        case PartitionTable::msdos:
        case PartitionTable::msdos_sectorbased:
            toolTipString += tr( "<br><br>This partition table type is only advisable on older "
            "systems which start from a <strong>BIOS</strong> boot "
            "environment. GPT is recommended in most other cases.<br><br>"
            "<strong>Warning:</strong> the MBR partition table "
            "is an obsolete MS-DOS era standard.<br>"
            "Only 4 <em>primary</em> partitions may be created, and of "
            "those 4, one can be an <em>extended</em> partition, which "
            "may in turn contain many <em>logical</em> partitions." );
    }

    m_ptLabel = typeString;
//     m_ptLabel->setToolTip( toolTipString );

//     m_ptIcon->setToolTip( tr( "The type of <strong>partition table</strong> on the "
//     "selected storage device.<br><br>"
//     "The only way to change the partition table type is to "
//     "erase and recreate the partition table from scratch, "
//     "which destroys all data on the storage device.<br>"
//     "This installer will keep the current partition table "
//     "unless you explicitly choose otherwise.<br>"
//     "If unsure, on modern systems GPT is preferred." ) );
    emit tableTypeChanged();
}




/** @brief Given a set of swap choices, return a sensible value from it.
 *
 * "Sensible" here means: if there is one value, use it; otherwise, use
 * NoSwap if there are no choices, or if NoSwap is one of the choices, in the set.
 * If that's not possible, any value from the set.
 */
SwapChoice pickOne( const SwapChoiceSet& s )
{
    if ( s.count() == 0 )
        return SwapChoice::NoSwap;
    if ( s.count() == 1 )
        return *( s.begin() );
    if ( s.contains( SwapChoice::NoSwap ) )
        return SwapChoice::NoSwap;
    // Here, count > 1 but NoSwap is not a member.
    return *( s.begin() );
}


Config::Config(QObject* parent )
: QObject( parent )
, m_deviceModel(nullptr)
, m_bootloaderModel(nullptr)
, m_core( nullptr )
, m_installChoice( NoChoice )
, m_isEfi( false )
, m_nextEnabled( false )
, m_grp( new OptGroup (this) )
, m_alongsideOption( new Opt(this) )
, m_eraseOption( new Opt(this) )
, m_replaceOption( new Opt(this) )
, m_somethingElseOption( new Opt(this) )
, m_encryptOption ( new EncryptOpt(this) )
, m_deviceInfo( new DeviceInfo (this) )
, m_reuseHomeOption ( new Opt(this) )
, m_efiOption ( new EfiOpt (this) )
, m_lastSelectedDeviceIndex( -1 )
// , m_eraseSwapChoice( pickOne( swapChoices ) )
, m_allowManualPartitioning( true ) //TODO for now since it has nto qml support
{
// //     setupUi( this );

    auto gs = Calamares::JobQueue::instance()->globalStorage();

    m_defaultFsType = gs->value( "defaultFileSystemType" ).toString();
    m_encryptOption->setEnabled (gs->value( "enableLuksAutomatedPartitioning" ).toBool());
    m_allowManualPartitioning = gs->value( "allowManualPartitioning" ).toBool();

    if ( FileSystem::typeForName( m_defaultFsType ) == FileSystem::Unknown )
        m_defaultFsType = "ext4";


    // Drive selector + preview
//     CALAMARES_RETRANSLATE(
//         retranslateUi( this );
//         m_drivesLabel->setText( tr( "Select storage de&vice:" ) );
//         m_previewBeforeLabel->setText( tr( "Current:" ) );
//         m_previewAfterLabel->setText(  tr( "After:" ) );
//     )

//     m_previewBeforeFrame->setSizePolicy( QSizePolicy::Preferred, QSizePolicy::Expanding );
//     m_previewAfterFrame->setSizePolicy( QSizePolicy::Preferred, QSizePolicy::Expanding );
//     m_previewAfterLabel->hide();
//     m_previewAfterFrame->hide();

    m_eraseOption->setLabel( tr( "<strong>Erase disk</strong>" ) );
    m_alongsideOption->setLabel( tr( "<strong>Install alongside</strong>") );
    m_replaceOption->setLabel( tr( "<strong>Replace a partition</strong>" ) );
    m_somethingElseOption->setLabel( tr( "<strong>Manual partitioning</strong>" ) );
    m_encryptOption->setLabel(tr("Encrypt system"));
    m_reuseHomeOption->setLabel( tr ("Reuse Home" ));

    m_encryptOption->hide();
    m_reuseHomeOption->hide();

    gs->insert( "reuseHome", false );
}

void
Config::init(const SwapChoiceSet& swapChoices, PartitionCoreModule* core)
{
    m_core = core;

    m_deviceModel = core->deviceModel();
    emit devicesModelChanged();

    m_bootloaderModel = core->bootLoaderModel();
    emit bootloaderModelChanged();

    m_isEfi = PartUtils::isEfiSystem();
    emit isEfiChanged();

    m_availableSwapChoices = swapChoices; //TODO a model or whats up?
    m_eraseSwapChoice = pickOne(swapChoices);

    // When the chosen bootloader device changes, we update the choice in the PCM
    connect( m_bootloaderModel, &BootLoaderModel::currentIndexChanged,
             this, [this]( int newIndex )
             {
                 QVariant var = m_bootloaderModel->data( m_bootloaderModel->index(newIndex, 0) , BootLoaderModel::BootLoaderPathRole );
                 if ( !var.isValid() )
                     return;
                 m_core->setBootLoaderInstallPath( var.toString() );

             } );

    setupChoices();

    // We need to do this because a PCM revert invalidates the deviceModel.
    connect( core, &PartitionCoreModule::reverted,
             this, [=]
             {
                 m_deviceModel = core->deviceModel();
                 emit devicesModelChanged();
                 m_deviceModel->setCurrentIndex( m_lastSelectedDeviceIndex );
             } );


    connect( m_deviceModel,
             &DeviceModel::currentIndexChanged,
             this, &Config::applyDeviceChoice );

    connect( m_encryptOption, &EncryptOpt::checkedChanged,
             this, &Config::onEncryptWidgetStateChanged );

    connect( m_reuseHomeOption, &Opt::checkedChanged,
             this, &Config::onHomeCheckBoxStateChanged );

    Config::applyDeviceChoice();
}

/**
 * @brief ChoicePage::setupChoices creates PrettyRadioButton objects for the action
 *      choices.
 * @warning This must only run ONCE because it creates signal-slot connections for the
 *      actions. When an action is triggered, it runs action-specific code that may
 *      change the internal state of the PCM, and it updates the bottom preview (or
 *      split) widget.
 *      Synchronous loading ends here.
 */
void
Config::setupChoices()
{
    // sample os-prober output:
    // /dev/sda2:Windows 7 (loader):Windows:chain
    // /dev/sda6::Arch:linux
    //
    // There are three possibilities we have to consider:
    //  - There are no operating systems present
    //  - There is one operating system present
    //  - There are multiple operating systems present
    //
    // There are three outcomes we have to provide:
    //  1) Wipe+autopartition
    //  2) Resize+autopartition
    //  3) Manual
    //  TBD: upgrade option?


    m_alongsideOption->setIcon(CalamaresUtils::defaultPixmapUrl( CalamaresUtils::PartitionAlongside, CalamaresUtils::Original));
    m_grp->addOpt( m_alongsideOption, Alongside );


    m_eraseOption->setIcon(CalamaresUtils::defaultPixmapUrl( CalamaresUtils::PartitionEraseAuto, CalamaresUtils::Original));
    m_grp->addOpt( m_eraseOption, Erase );


    m_replaceOption->setIcon(CalamaresUtils::defaultPixmapUrl( CalamaresUtils::PartitionReplaceOs, CalamaresUtils::Original));
    m_grp->addOpt( m_replaceOption, Replace );


    m_somethingElseOption->setIcon(CalamaresUtils::defaultPixmapUrl( CalamaresUtils::PartitionManual, CalamaresUtils::Original));
    m_grp->addOpt( m_somethingElseOption, Manual );


    // Fill up swap options
    // .. TODO: only if enabled in the config
    if ( m_availableSwapChoices.count() > 1 )
    {

//         m_eraseSwapChoiceComboBox = createCombo( m_availableSwapChoices, m_eraseSwapChoice );
//         m_eraseOption->addOptions( m_eraseSwapChoiceComboBox );
    } //TODO same issue deciding if it is a model or what up


//
    connect( m_grp, &OptGroup::optToggled,
             this, [ this ]( int id, bool checked )
             {
                 cDebug()<< "Install oiption selected" << static_cast< InstallChoice >( id ) << checked;

                 if ( checked )  // An action was picked.
                 {
                     setInstallChoice(static_cast< InstallChoice >( id ));
                     updateNextEnabled();

                     emit actionChosen();
                 }
                 else    // An action was unpicked, either on its own or because of another selection.
                 {
                     if ( m_grp->checkedOpt() == nullptr )  // If no other action is chosen, we must
                     {                                         // set m_installChoice to NoChoice and reset previews.
                         setInstallChoice(NoChoice);
                         updateNextEnabled();

                         emit actionChosen();
                     }
                 }
             } );


    connect( this, &Config::actionChosen,
             this, &Config::onActionChanged );

//     if ( m_eraseSwapChoiceComboBox )
//         connect( m_eraseSwapChoiceComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
//                  this, &ChoicePage::onEraseSwapChoiceChanged ); //TODO same swap model issue
//
        CALAMARES_RETRANSLATE(
            m_somethingElseOption->setMessage( tr( "You can create or resize partitions yourself."
            " Having a GPT partition table and <strong>fat32 512Mb /boot partition "
            "is a must for UEFI installs</strong>, either use an existing without formatting or create one." ) );
//             updateSwapChoicesTr( m_eraseSwapChoiceComboBox );
        )
}

/**
 * @brief ChoicePage::selectedDevice queries the device picker (which may be a combo or
 *      a list view) to get a pointer to the currently selected Device.
 * @return a Device pointer, valid in the current state of the PCM, or nullptr if
 *      something goes wrong.
 */
Device*
Config::selectedDevice()
{
    Device* currentDevice = nullptr;
    currentDevice = m_deviceModel->deviceForIndex( m_deviceModel->index( m_deviceModel->currentIndex() ) );

    return currentDevice;
}

void
Config::hideButtons()
{
   m_deviceEditable = false;
   emit deviceEditableChanged();

   m_eraseOption->hide();
   m_replaceOption->hide();
   m_alongsideOption->hide();
   m_somethingElseOption->hide();
}

/**
 * @brief ChoicePage::applyDeviceChoice handler for the selected event of the device
 *      picker. Calls ChoicePage::selectedDevice() to get the current Device*, then
 *      updates the preview widget for the on-disk state (calls ChoicePage::
 *      updateDeviceStatePreview()) and finally sets up the available actions and their
 *      text by calling ChoicePage::setupActions().
 */
void
Config::applyDeviceChoice()
{
    if ( !selectedDevice() )
    {
        hideButtons();
        return;
    }

    if ( m_core->isDirty() )
    {
        ScanningDialog::run( QtConcurrent::run( [ = ]
        {
            QMutexLocker locker( &m_coreMutex );
            m_core->revertAllDevices();
        } ),
        [ this ]
        {
            continueApplyDeviceChoice();
        },
        nullptr ); //TODO we dont have a parent,  so how to delete this dialog a dummy QWidget?
    }
    else
    {
        continueApplyDeviceChoice();
    }
}

void
Config::continueApplyDeviceChoice()
{
    Device* currd = selectedDevice();

    // The device should only be nullptr immediately after a PCM reset.
    // applyDeviceChoice() will be called again momentarily as soon as we handle the
    // PartitionCoreModule::reverted signal.
    if ( !currd )
    {
        hideButtons();
        return;
    }

    updateDeviceStatePreview();

    // Preview setup done. Now we show/hide choices as needed.
    setupActions();

    m_lastSelectedDeviceIndex = m_deviceModel->currentIndex();

    emit actionChosen();
    emit deviceChosen();
}

void
Config::onActionChanged()
{
    Device* currd = selectedDevice();
    if ( currd )
    {
        applyActionChoice( installChoice() );
    }
}

void
Config::onEraseSwapChoiceChanged()
{
//     if ( m_eraseSwapChoiceComboBox )//TODO swap model issue again
//     {
//         m_eraseSwapChoice = static_cast<PartitionActions::Choices::SwapChoice>( m_eraseSwapChoiceComboBox->currentData().toInt() );
//         onActionChanged();
//     }
}

void
Config::applyActionChoice( Config::InstallChoice choice )
{
//     m_beforePartitionBarsView->selectionModel()->
//     disconnect( SIGNAL( currentRowChanged( QModelIndex, QModelIndex ) ) );
//     m_beforePartitionBarsView->selectionModel()->clearSelection();
//     m_beforePartitionBarsView->selectionModel()->clearCurrentIndex();

    switch ( choice )
    {
        case Erase:
        {
            auto gs = Calamares::JobQueue::instance()->globalStorage();

            PartitionActions::Choices::AutoPartitionOptions options {
                gs->value( "defaultFileSystemType" ).toString(),
                m_encryptOption->passphrase(),
                gs->value( "efiSystemPartition" ).toString(),
                CalamaresUtils::GiBtoBytes( gs->value( "requiredStorageGiB" ).toDouble() ),
                m_eraseSwapChoice
            };

            if ( m_core->isDirty() )
            {
                ScanningDialog::run( QtConcurrent::run( [ = ]
                {
                    QMutexLocker locker( &m_coreMutex );
                    m_core->revertDevice( selectedDevice() );
                } ),
                [ = ]
                {
                    PartitionActions::doAutopartition( m_core, selectedDevice(), options );
                    emit deviceChosen();
                },
                nullptr ); //hmm maybe create a dummy object to hanlde the deletion ?
            }
            else
            {
                PartitionActions::doAutopartition( m_core, selectedDevice(), options );
                emit deviceChosen();
            }
        }
        break;
        case Replace:
            if ( m_core->isDirty() )
            {
                ScanningDialog::run( QtConcurrent::run( [ = ]
                {
                    QMutexLocker locker( &m_coreMutex );
                    m_core->revertDevice( selectedDevice() );
                } ),
                []{},
                nullptr );
            }
            updateNextEnabled();

//             connect( m_beforePartitionBarsView->selectionModel(), SIGNAL( currentRowChanged( QModelIndex, QModelIndex ) ),
//                      this, SLOT( onPartitionToReplaceSelected( QModelIndex, QModelIndex ) ),
//                      Qt::UniqueConnection );
            break;

        case Alongside:
            if ( m_core->isDirty() )
            {
                ScanningDialog::run( QtConcurrent::run( [ = ]
                {
                    QMutexLocker locker( &m_coreMutex );
                    m_core->revertDevice( selectedDevice() );
                } ),
                [this]
                {
                    // We need to reupdate after reverting because the splitter widget is
                    // not a true view.
                    updateActionChoicePreview( installChoice() );
                    updateNextEnabled();
                },
                nullptr );
            }
            updateNextEnabled();

//             connect( m_beforePartitionBarsView->selectionModel(), SIGNAL( currentRowChanged( QModelIndex, QModelIndex ) ),
//                      this, SLOT( doAlongsideSetupSplitter( QModelIndex, QModelIndex ) ),
//                      Qt::UniqueConnection );
            break;
        case NoChoice:
        case Manual:
            break;
    }
    updateActionChoicePreview( choice );
}

void
Config::doAlongsideSetupSplitter( const QModelIndex& current,
                                      const QModelIndex& previous )
{
    Q_UNUSED( previous )
    if ( !current.isValid() )
        return;
//
//     if ( !m_afterPartitionSplitterWidget )
//         return;
//
//     const PartitionModel* modl = qobject_cast< const PartitionModel* >( current.model() );
//     if ( !modl )
//         return;
//
//     Partition* part = modl->partitionForIndex( current );
//     if ( !part )
//     {
//         cDebug() << Q_FUNC_INFO << "Partition not found for index" << current;
//         return;
//     }
//
//     double requiredStorageGB = Calamares::JobQueue::instance()
//     ->globalStorage()
//     ->value( "requiredStorageGiB" )
//     .toDouble();
//
//     qint64 requiredStorageB = CalamaresUtils::GiBtoBytes( requiredStorageGB + 0.1 + 2.0 );
//
//     m_afterPartitionSplitterWidget->setSplitPartition(
//         part->partitionPath(),
//                                                       qRound64( part->used() * 1.1 ),
//                                                       part->capacity() - requiredStorageB,
//                                                       part->capacity() / 2 );
//
    if ( m_isEfi )
        setupEfiSystemPartitionSelector();
//
    cDebug() << "Partition selected for Alongside.";
//
    updateNextEnabled();
}

void
Config::onEncryptWidgetStateChanged()
{
    EncryptOpt::Encryption state = m_encryptOption->encryptionState();
    if ( m_installChoice == Erase )
    {
        if ( state == EncryptOpt::Encryption::Confirmed ||
            state == EncryptOpt::Encryption::Disabled )
            applyActionChoice( m_installChoice );
    }
    else if ( m_installChoice == Replace )
    {
        if ( /*m_beforePartitionBarsView &&
            m_beforePartitionBarsView->selectionModel()->currentIndex().isValid() &&*/
            ( state == EncryptOpt::Encryption::Confirmed ||
            state == EncryptOpt::Encryption::Disabled ) )
        {
//             doReplaceSelectedPartition( m_beforePartitionBarsView->
//             selectionModel()->
//             currentIndex() );
        }
    }
    updateNextEnabled();
}

void
Config::onHomeCheckBoxStateChanged()
{
    if ( installChoice() == Replace /*&&
        m_beforePartitionBarsView->selectionModel()->currentIndex().isValid()*/ )
    {
//         doReplaceSelectedPartition( m_beforePartitionBarsView->
//         selectionModel()->
//         currentIndex() );
    }
}

void
Config::onLeave()
{
    if ( m_installChoice == Alongside )
        doAlongsideApply();

    if ( m_isEfi && ( m_installChoice == Alongside || m_installChoice == Replace ) )
    {
        QList< Partition* > efiSystemPartitions = m_core->efiSystemPartitions();
        if ( efiSystemPartitions.count() == 1 )
        {
            PartitionInfo::setMountPoint(
                efiSystemPartitions.first(),
                                         Calamares::JobQueue::instance()->
                                         globalStorage()->
                                         value( "efiSystemPartition" ).toString() );
        }
        else if ( efiSystemPartitions.count() > 1 && m_efiAvailable )
        {
            PartitionInfo::setMountPoint(
                efiSystemPartitions.at( m_efiOption->model()->currentIndex() ),
                                         Calamares::JobQueue::instance()->
                                         globalStorage()->
                                         value( "efiSystemPartition" ).toString() );
        }
        else
        {
            cError() << "cannot set up EFI system partition.\nESP count:"
            << efiSystemPartitions.count() << "\nm_efiComboBox:"
            << m_efiAvailable;
        }
    }
    else    // installPath is then passed to the bootloader module for MBR setup
    {
        if ( !m_isEfi )
        {
            if ( !m_bootloaderAvailable )
            {
                auto d_p = selectedDevice();
                if ( d_p )
                    m_core->setBootLoaderInstallPath( d_p->deviceNode() );
                else
                    cWarning() << "No device selected for bootloader.";
            }
            else
            {
                QVariant var = m_bootloaderModel->data(m_bootloaderModel->index(m_bootloaderModel->currentIndex(), 0), BootLoaderModel::BootLoaderPathRole );
                if ( !var.isValid() )
                    return;
                m_core->setBootLoaderInstallPath( var.toString() );
            }
        }
    }
}

void
Config::doAlongsideApply()
{
//     Q_ASSERT( m_afterPartitionSplitterWidget->splitPartitionSize() >= 0 );
//     Q_ASSERT( m_afterPartitionSplitterWidget->newPartitionSize()   >= 0 );
//
//     QMutexLocker locker( &m_coreMutex );
//
//     QString path = m_beforePartitionBarsView->
//     selectionModel()->
//     currentIndex().data( PartitionModel::PartitionPathRole ).toString();
//
//     DeviceModel* dm = m_core->deviceModel();
//     for ( int i = 0; i < dm->rowCount(); ++i )
//     {
//         Device* dev = dm->deviceForIndex( dm->index( i ) );
//         Partition* candidate = findPartitionByPath( { dev }, path );
//         if ( candidate )
//         {
//             qint64 firstSector = candidate->firstSector();
//             qint64 oldLastSector = candidate->lastSector();
//             qint64 newLastSector = firstSector +
//             m_afterPartitionSplitterWidget->splitPartitionSize() /
//             dev->logicalSize();
//
//             m_core->resizePartition( dev, candidate, firstSector, newLastSector );
//             m_core->layoutApply( dev, newLastSector + 2, oldLastSector,
//                                  m_encryptWidget->passphrase(), candidate->parent(),
//                                  candidate->roles()
//             );
//             m_core->dumpQueue();
//
//             break;
//         }
//     }
}

void
Config::onPartitionToReplaceSelected( const QModelIndex& current,
                                          const QModelIndex& previous )
{
    Q_UNUSED( previous )
    if ( !current.isValid() )
        return;

    // Reset state on selection regardless of whether this will be used.
    m_reuseHomeOption->setChecked( false );

    doReplaceSelectedPartition( current );
}


void
Config::doReplaceSelectedPartition( const QModelIndex& current )
{
    if ( !current.isValid() )
        return;

    QString* homePartitionPath = new QString();
    bool doReuseHomePartition = m_reuseHomeOption->checked();

    // NOTE: using by-ref captures because we need to write homePartitionPath and
    //       doReuseHomePartition *after* the device revert, for later use.
    ScanningDialog::run( QtConcurrent::run(
        [ this, current ]( QString* homePartitionPath, bool doReuseHomePartition )
        {
            QMutexLocker locker( &m_coreMutex );

            if ( m_core->isDirty() )
            {
                m_core->revertDevice( selectedDevice() );
            }

            // if the partition is unallocated(free space), we don't replace it but create new one
            // with the same first and last sector
            Partition* selectedPartition =
            static_cast< Partition* >( current.data( PartitionModel::PartitionPtrRole )
            .value< void* >() );
            if ( isPartitionFreeSpace( selectedPartition ) )
            {
                //NOTE: if the selected partition is free space, we don't deal with
                //      a separate /home partition at all because there's no existing
                //      rootfs to read it from.
                PartitionRole newRoles = PartitionRole( PartitionRole::Primary );
                PartitionNode* newParent = selectedDevice()->partitionTable();

                if ( selectedPartition->parent() )
                {
                    Partition* parent = dynamic_cast< Partition* >( selectedPartition->parent() );
                    if ( parent && parent->roles().has( PartitionRole::Extended ) )
                    {
                        newRoles = PartitionRole( PartitionRole::Logical );
                        newParent = findPartitionByPath( { selectedDevice() }, parent->partitionPath() );
                    }
                }

                m_core->layoutApply( selectedDevice(), selectedPartition->firstSector(),
                                     selectedPartition->lastSector(),
                                     m_encryptOption->passphrase(), newParent, newRoles
                );
            }
            else
            {
                // We can't use the PartitionPtrRole because we need to make changes to the
                // main DeviceModel, not the immutable copy.
                QString partPath = current.data( PartitionModel::PartitionPathRole ).toString();
                selectedPartition = findPartitionByPath( { selectedDevice() },
                                                         partPath );
                if ( selectedPartition )
                {
                    // Find out is the selected partition has a rootfs. If yes, then make the
                    // m_reuseHomeCheckBox visible and set its text to something meaningful.
                    homePartitionPath->clear();
                    for ( const OsproberEntry& osproberEntry : m_core->osproberEntries() )
                    {
                        if ( osproberEntry.path == partPath )
                            *homePartitionPath = osproberEntry.homePath;
                    }

                    if ( homePartitionPath->isEmpty() )
                    {
                        doReuseHomePartition = false;
                    }

                    Calamares::GlobalStorage* gs = Calamares::JobQueue::instance()->globalStorage();

                    PartitionActions::doReplacePartition(
                        m_core,
                        selectedDevice(),
                                                         selectedPartition,
                                                         {
                                                             gs->value( "defaultFileSystemType" ).toString(),
                                                         m_encryptOption->passphrase()
                                                         } );
                    Partition* homePartition = findPartitionByPath( { selectedDevice() },
                                                                    *homePartitionPath );

                    if ( homePartition && doReuseHomePartition )
                    {
                        PartitionInfo::setMountPoint( homePartition, "/home" );
                        gs->insert( "reuseHome", true );
                    }
                    else
                    {
                        gs->insert( "reuseHome", false );
                    }
                }
            }
        }, homePartitionPath, doReuseHomePartition ),
        [ = ]
        {
            m_reuseHomeOption->setVisible( !homePartitionPath->isEmpty() );

            if ( !homePartitionPath->isEmpty() )
                m_reuseHomeOption->setLabel( tr( "Reuse %1 as home partition for %2." )
                .arg( *homePartitionPath )
                .arg( Calamares::Branding::ShortProductName ) );
            delete homePartitionPath;

            if ( m_isEfi )
                setupEfiSystemPartitionSelector();

            updateNextEnabled();
            if ( m_bootloaderModel->currentIndex() < 0 )
                m_bootloaderModel->setCurrentIndex( m_lastSelectedDeviceIndex );
        }, nullptr );
}

/**
 * @brief ChoicePage::updateDeviceStatePreview clears and rebuilds the contents of the
 *      preview widget for the current on-disk state. This also triggers a rescan in the
 *      PCM to get a Device* copy that's unaffected by subsequent PCM changes.
 * @param currentDevice a pointer to the selected Device.
 */
void
Config::updateDeviceStatePreview()
{
    //FIXME: this needs to be made async because the rescan can block the UI thread for
    //       a while. --Teo 10/2015
    Device* currentDevice = selectedDevice();
    Q_ASSERT( currentDevice );
    QMutexLocker locker( &m_previewsMutex );
//
    cDebug() << "Updating partitioning state widgets.";
//     qDeleteAll( m_previewBeforeFrame->children() );
//
//     auto layout = m_previewBeforeFrame->layout();
//     if ( layout )
//         layout->deleteLater();  // Doesn't like nullptr
//
//         layout = new QVBoxLayout;
//     m_previewBeforeFrame->setLayout( layout );
//     CalamaresUtils::unmarginLayout( layout );
//     layout->setSpacing( 6 );
//
//     PartitionBarsView::NestedPartitionsMode mode = Calamares::JobQueue::instance()->globalStorage()->
//     value( "drawNestedPartitions" ).toBool() ?
//     PartitionBarsView::DrawNestedPartitions :
//     PartitionBarsView::NoNestedPartitions;
//     m_beforePartitionBarsView = new PartitionBarsView( m_previewBeforeFrame );
//     m_beforePartitionBarsView->setNestedPartitionsMode( mode );
//     m_beforePartitionLabelsView = new PartitionLabelsView( m_previewBeforeFrame );
//     m_beforePartitionLabelsView->setExtendedPartitionHidden( mode == PartitionBarsView::NoNestedPartitions );
//
    Device* deviceBefore = m_core->immutableDeviceCopy( currentDevice );
//
    PartitionModel* model = new PartitionModel( m_beforePartitionBarsView );
    model->init( deviceBefore, m_core->osproberEntries() );
//
//     m_beforePartitionBarsView->setModel( model );
//     m_beforePartitionLabelsView->setModel( model );
//
//     // Make the bars and labels view use the same selectionModel.
//     auto sm = m_beforePartitionLabelsView->selectionModel();
//     m_beforePartitionLabelsView->setSelectionModel( m_beforePartitionBarsView->selectionModel() );
//     if ( sm )
//         sm->deleteLater();
//
//     switch ( m_choice )
//     {
//         case Replace:
//         case Alongside:
//             m_beforePartitionBarsView->setSelectionMode( QAbstractItemView::SingleSelection );
//             m_beforePartitionLabelsView->setSelectionMode( QAbstractItemView::SingleSelection );
//             break;
//         default:
//             m_beforePartitionBarsView->setSelectionMode( QAbstractItemView::NoSelection );
//             m_beforePartitionLabelsView->setSelectionMode( QAbstractItemView::NoSelection );
//     }
//
//     layout->addWidget( m_beforePartitionBarsView );
//     layout->addWidget( m_beforePartitionLabelsView );
}

/**
 * @brief ChoicePage::updateActionChoicePreview clears and rebuilds the contents of the
 *      preview widget for the current PCM-proposed state. No rescans here, this should
 *      be immediate.
 * @param currentDevice a pointer to the selected Device.
 * @param choice the chosen partitioning action.
 */
void
Config::updateActionChoicePreview( Config::InstallChoice choice )
{
    Device* currentDevice = selectedDevice();
    Q_ASSERT( currentDevice );
//
    QMutexLocker locker( &m_previewsMutex );
//
    cDebug() << "Updating partitioning preview widgets.";
//     qDeleteAll( m_previewAfterFrame->children() );
//
//     auto oldlayout = m_previewAfterFrame->layout();
//     if ( oldlayout )
//         oldlayout->deleteLater();
//
//     QVBoxLayout* layout = new QVBoxLayout;
//     m_previewAfterFrame->setLayout( layout );
//     CalamaresUtils::unmarginLayout( layout );
//     layout->setSpacing( 6 );
//
//     PartitionBarsView::NestedPartitionsMode mode = Calamares::JobQueue::instance()->globalStorage()->
//     value( "drawNestedPartitions" ).toBool() ?
//     PartitionBarsView::DrawNestedPartitions :
//     PartitionBarsView::NoNestedPartitions;
//
    m_reuseHomeOption->hide();
    Calamares::JobQueue::instance()->globalStorage()->insert( "reuseHome", false );

    switch ( choice )
    {
        case Alongside:
        {
            if ( m_encryptOption->enabled() )
                m_encryptOption->show();
//             m_previewBeforeLabel->setText( tr( "Current:" ) );
//             m_selectLabel->setText( tr( "<strong>Select a partition to shrink, "
//             "then drag the bottom bar to resize</strong>" ) );
//             m_selectLabel->show();

//             m_afterPartitionSplitterWidget = new PartitionSplitterWidget( m_previewAfterFrame );
//             m_afterPartitionSplitterWidget->init( selectedDevice(), mode == PartitionBarsView::DrawNestedPartitions );
//             layout->addWidget( m_afterPartitionSplitterWidget );

//             QLabel* sizeLabel = new QLabel( m_previewAfterFrame );
//             layout->addWidget( sizeLabel );
//             sizeLabel->setWordWrap( true );
//             connect( m_afterPartitionSplitterWidget, &PartitionSplitterWidget::partitionResized, this,
//                      [ this, sizeLabel ]( const QString& path, qint64 size, qint64 sizeNext )
//                      {
//                          Q_UNUSED( path )
//                          sizeLabel->setText( tr( "%1 will be shrunk to %2MiB and a new "
//                          "%3MiB partition will be created for %4." )
//                          .arg( m_beforePartitionBarsView->selectionModel()->currentIndex().data().toString() )
//                          .arg( CalamaresUtils::BytesToMiB( size ) )
//                          .arg( CalamaresUtils::BytesToMiB( sizeNext ) )
//                          .arg( *Calamares::Branding::ShortProductName ) );
//                      }
//             );

//             m_previewAfterFrame->show();
//             m_previewAfterLabel->show();

//             SelectionFilter filter = [ this ]( const QModelIndex& index )
//             {
//                 return PartUtils::canBeResized(
//                     static_cast< Partition* >(
//                         index.data( PartitionModel::PartitionPtrRole )
//                         .value< void* >() ) );
//             };
//             m_beforePartitionBarsView->setSelectionFilter( filter );
//             m_beforePartitionLabelsView->setSelectionFilter( filter );

            break;
        }
        case Erase:
        case Replace:
        {
            if ( m_encryptOption->enabled() )
                m_encryptOption->show();
//             m_previewBeforeLabel->setText( tr( "Current:" ) );
//             m_afterPartitionBarsView = new PartitionBarsView( m_previewAfterFrame );
//             m_afterPartitionBarsView->setNestedPartitionsMode( mode );
//             m_afterPartitionLabelsView = new PartitionLabelsView( m_previewAfterFrame );
//             m_afterPartitionLabelsView->setExtendedPartitionHidden( mode == PartitionBarsView::NoNestedPartitions );
//             m_afterPartitionLabelsView->setCustomNewRootLabel( *Calamares::Branding::BootloaderEntryName );

            PartitionModel* model = m_core->partitionModelForDevice( selectedDevice() );

            // The QObject parents tree is meaningful for memory management here,
            // see qDeleteAll above.
//             m_afterPartitionBarsView->setModel( model );
//             m_afterPartitionLabelsView->setModel( model );
//             m_afterPartitionBarsView->setSelectionMode( QAbstractItemView::NoSelection );
//             m_afterPartitionLabelsView->setSelectionMode( QAbstractItemView::NoSelection );
//
//             layout->addWidget( m_afterPartitionBarsView );
//             layout->addWidget( m_afterPartitionLabelsView );

            if ( !m_isEfi )
            {
//                 QWidget* eraseWidget = new QWidget;
//
//                 QHBoxLayout* eraseLayout = new QHBoxLayout;
//                 eraseWidget->setLayout( eraseLayout );
//                 eraseLayout->setContentsMargins( 0, 0, 0, 0 );
//                 QLabel* eraseBootloaderLabel = new QLabel( eraseWidget );
//                 eraseLayout->addWidget( eraseBootloaderLabel );
//                 eraseBootloaderLabel->setText( tr( "Boot loader location:" ) );

//                 m_bootloaderComboBox = createBootloaderComboBox( eraseWidget );
                connect( m_core->bootLoaderModel(), &QAbstractItemModel::modelReset,
                         [ this ]()
                         {
                                 m_bootloaderModel->restoreSelectedBootLoader( m_core->bootLoaderInstallPath() );
                         }
                );
                connect( m_core, &PartitionCoreModule::deviceReverted, this,
                         [ this ]( Device* dev )
                         {
                             Q_UNUSED( dev )

                                 if ( m_bootloaderModel != m_core->bootLoaderModel() )
                                     m_bootloaderModel = m_core->bootLoaderModel();

                                 m_bootloaderModel->setCurrentIndex( m_lastSelectedDeviceIndex );

                         }, Qt::QueuedConnection );
                // ^ Must be Queued so it's sure to run when the widget is already visible.

//                 eraseLayout->addWidget( m_bootloaderComboBox );
//                 eraseBootloaderLabel->setBuddy( m_bootloaderComboBox );
//                 eraseLayout->addStretch();
//
//                 layout->addWidget( eraseWidget );
            }

//             m_previewAfterFrame->show();
//             m_previewAfterLabel->show();

//             if ( m_installChoice == Erase )
//                 m_selectLabel->hide();
//             else
//             {
//                 SelectionFilter filter = [ this ]( const QModelIndex& index )
//                 {
//                     return PartUtils::canBeReplaced(
//                         static_cast< Partition* >(
//                             index.data( PartitionModel::PartitionPtrRole )
//                             .value< void* >() ) );
//                 };
//                 m_beforePartitionBarsView->setSelectionFilter( filter );
//                 m_beforePartitionLabelsView->setSelectionFilter( filter );
//
//                 m_selectLabel->show();
//                 m_selectLabel->setText( tr( "<strong>Select a partition to install on</strong>" ) );
//             }

            break;
        }
        case NoChoice:
        case Manual:
//             m_selectLabel->hide();
//             m_previewAfterFrame->hide();
//             m_previewBeforeLabel->setText( tr( "Current:" ) );
//             m_previewAfterLabel->hide();
            m_encryptOption->hide();
            break;
    }

    if ( m_isEfi && ( m_installChoice == Alongside || m_installChoice == Replace ) )
    {
//         QHBoxLayout* efiLayout = new QHBoxLayout;
//         layout->addLayout( efiLayout );
//         m_efiLabel = new QLabel( m_previewAfterFrame );
//         efiLayout->addWidget( m_efiLabel );
//         m_efiComboBox = new QComboBox( m_previewAfterFrame );
//         efiLayout->addWidget( m_efiComboBox );
//         m_efiLabel->setBuddy( m_efiComboBox );
//         m_efiComboBox->hide();
//         efiLayout->addStretch();
    }

    // Also handle selection behavior on beforeFrame.
//     QAbstractItemView::SelectionMode previewSelectionMode;
//     switch ( m_choice )
//     {
//         case Replace:
//         case Alongside:
//             previewSelectionMode = QAbstractItemView::SingleSelection;
//             break;
//         default:
//             previewSelectionMode = QAbstractItemView::NoSelection;
//     }
//
//     m_beforePartitionBarsView->setSelectionMode( previewSelectionMode );
//     m_beforePartitionLabelsView->setSelectionMode( previewSelectionMode );
}

void
Config::setupEfiSystemPartitionSelector()
{
    Q_ASSERT( m_isEfi );

    // Only the already existing ones:
    QList< Partition* > efiSystemPartitions = m_core->efiSystemPartitions();

    if ( efiSystemPartitions.count() == 0 ) //should never happen
    {
        m_efiOption->setLabel(
            tr( "An EFI system partition cannot be found anywhere "
            "on this system. Please go back and use manual "
            "partitioning to set up %1." )
            .arg( Calamares::Branding::ShortProductName ) );
        updateNextEnabled();
    }
    else if ( efiSystemPartitions.count() == 1 ) //probably most usual situation
    {
        m_efiOption->setLabel(
            tr( "The EFI system partition at %1 will be used for "
            "starting %2." )
            .arg( efiSystemPartitions.first()->partitionPath() )
            .arg( Calamares::Branding::ShortProductName ) );
    }
    else
    {
        m_efiOption->show();
        m_efiOption->setLabel( tr( "EFI system partition:" ) );
        for ( int i = 0; i < efiSystemPartitions.count(); ++i )
        {
            Partition* efiPartition = efiSystemPartitions.at( i );
            m_efiOption->model()->addItem( efiPartition->partitionPath(), i );

            // We pick an ESP on the currently selected device, if possible
            if ( efiPartition->devicePath() == selectedDevice()->deviceNode() &&
                efiPartition->number() == 1 )
                m_efiOption->model()->setCurrentIndex( i );
        }
    }
}


static inline void
force_uncheck(OptGroup* grp, Opt* opt)
{
    opt->hide();
    opt->setExclusive( false );
    opt->setChecked( false );
    grp->setExclusive( true );
}

static inline QDebug&
operator <<( QDebug& s, PartitionIterator& it )
{
    s << ( ( *it ) ? ( *it )->deviceNode() : QString( "<null device>" ) );
    return s;
}

/**
 * @brief ChoicePage::setupActions happens every time a new Device* is selected in the
 *      device picker. Sets up the text and visibility of the partitioning actions based
 *      on the currently selected Device*, bootloader and os-prober output.
 * @param currentDevice
 */
void
Config::setupActions()
{
    Device* currentDevice = selectedDevice();
    OsproberEntryList osproberEntriesForCurrentDevice =
    getOsproberEntriesForDevice( currentDevice );

    cDebug() << "Setting up actions for" << currentDevice->deviceNode()
    << "with" << osproberEntriesForCurrentDevice.count() << "entries.";

    if ( currentDevice->partitionTable() )
        m_deviceInfo->setPartitionTableType( currentDevice->partitionTable()->type() );
    else
        m_deviceInfo->setPartitionTableType( PartitionTable::unknownTableType );

    if ( m_allowManualPartitioning )
    {
        m_somethingElseOption->show();

    }    else
    {
        force_uncheck( m_grp, m_somethingElseOption );
    }

    bool atLeastOneCanBeResized = false;
    bool atLeastOneCanBeReplaced = false;
    bool atLeastOneIsMounted = false;  // Suppress 'erase' if so
    bool isInactiveRAID = false;

    #ifdef WITH_KPMCORE4API
    if ( currentDevice->type() == Device::Type::SoftwareRAID_Device &&
        static_cast< SoftwareRAID* >(currentDevice)->status() == SoftwareRAID::Status::Inactive )
    {
        cDebug() << Logger::SubEntry << "part of an inactive RAID device";
        isInactiveRAID = true;
    }
    #endif

    for ( auto it = PartitionIterator::begin( currentDevice ); it != PartitionIterator::end( currentDevice ); ++it )
    {
        if ( PartUtils::canBeResized( *it ) )
        {
            cDebug() << Logger::SubEntry << "contains resizable" << it;
            atLeastOneCanBeResized = true;
        }
        if ( PartUtils::canBeReplaced( *it ) )
        {
            cDebug() << Logger::SubEntry << "contains replaceable" << it;
            atLeastOneCanBeReplaced = true;
        }
        if ( (*it)->isMounted() )
        {
            atLeastOneIsMounted = true;
        }
    }

    if ( osproberEntriesForCurrentDevice.count() == 0 )
    {
        CALAMARES_RETRANSLATE(
            cDebug() << "Setting texts for 0 osprober entries";
            m_prettyStatus = ( tr( "This storage device does not seem to have an operating system on it. "
            "What would you like to do?<br/>"
            "You will be able to review and confirm your choices "
            "before any change is made to the storage device." ) );
            emit prettyStatusChanged();

            m_eraseOption->setMessage( tr("This will <font color=\"red\">delete</font> all data "
            "currently present on the selected storage device."));

            m_alongsideOption->setMessage( tr( "The installer will shrink a partition to make room for %1." )
            .arg( Calamares::Branding::ShortVersionedName ) );

            m_replaceOption->setMessage( tr( "Replaces a partition with %1." )
            .arg( Calamares::Branding::ShortVersionedName ) );
        )

        m_replaceOption->hide();
        m_alongsideOption->hide();
        m_grp->setExclusive( false );
        m_replaceOption->setChecked( false );
        m_alongsideOption->setChecked( false );
        m_grp->setExclusive( true );
    }
    else if ( osproberEntriesForCurrentDevice.count() == 1 )
    {
        QString osName = osproberEntriesForCurrentDevice.first().prettyName;

        if ( !osName.isEmpty() )
        {
            CALAMARES_RETRANSLATE(
                cDebug() << "Setting texts for 1 non-empty osprober entry";
                m_prettyStatus = ( tr( "This storage device has %1 on it. "
                "What would you like to do?<br/>"
                "You will be able to review and confirm your choices "
                "before any change is made to the storage device." )
                .arg( osName ) );
                emit prettyStatusChanged();

                m_alongsideOption->setMessage( tr( "The installer will shrink a partition to make room for %1." )
                .arg( Calamares::Branding::ShortVersionedName ) );

                m_eraseOption->setMessage( tr( "This will <font color=\"red\">delete</font> all data "
                "currently present on the selected storage device." ) );

                m_replaceOption->setMessage( tr( "Replaces a partition with %1." )
                .arg( Calamares::Branding::ShortVersionedName ) );
            )
        }
        else
        {
            CALAMARES_RETRANSLATE(
                cDebug() << "Setting texts for 1 empty osprober entry";
                m_prettyStatus = ( tr( "This storage device already has an operating system on it. "
                "What would you like to do?<br/>"
                "You will be able to review and confirm your choices "
                "before any change is made to the storage device." ) );

                m_alongsideOption->setMessage( tr( "The installer will shrink a partition to make room for %1." )
                .arg( Calamares::Branding::ShortVersionedName ) );

                m_eraseOption->setMessage( tr( "This will <font color=\"red\">delete</font> all data "
                "currently present on the selected storage device." ) );

                m_replaceOption->setMessage( tr( "Replaces a partition with %1." )
                .arg( Calamares::Branding::ShortVersionedName ) );

                emit prettyStatusChanged();
            )
        }
    }
    else
    {
        // osproberEntriesForCurrentDevice has at least 2 items.

        CALAMARES_RETRANSLATE(
            cDebug() << "Setting texts for >= 2 osprober entries";

            m_prettyStatus = ( tr( "This storage device has multiple operating systems on it. "
            "What would you like to do?<br/>"
            "You will be able to review and confirm your choices "
            "before any change is made to the storage device." ) );
            emit prettyStatusChanged();

            m_alongsideOption->setMessage( tr( "The installer will shrink a partition to make room for %1." )
            .arg( Calamares::Branding::ShortVersionedName ) );

            m_eraseOption->setMessage( tr( "This will <font color=\"red\">delete</font> all data "
            "currently present on the selected storage device." ) );

            m_replaceOption->setMessage( tr( "Replaces a partition with %1." )
            .arg( Calamares::Branding::ShortVersionedName ) );
        )
    }

    #ifdef DEBUG_PARTITION_UNSAFE
    #ifdef DEBUG_PARTITION_LAME
    // If things can't be broken, allow all the buttons
    atLeastOneCanBeReplaced = true;
    atLeastOneCanBeResized = true;
    atLeastOneIsMounted = false;
    isInactiveRAID = false;
    #endif
    #endif

    if ( atLeastOneCanBeReplaced )
        m_replaceOption->show();
    else
    {
        cDebug() << "Replace button suppressed because none can be replaced.";
        force_uncheck( m_grp, m_replaceOption );
    }

    if ( atLeastOneCanBeResized )
        m_alongsideOption->show();
    else
    {
        cDebug() << "Alongside button suppressed because none can be resized.";
        force_uncheck( m_grp, m_alongsideOption );
    }

    if ( !atLeastOneIsMounted && !isInactiveRAID )
        m_eraseOption->show();  // None mounted
        else
        {
            cDebug() << "Erase button suppressed"
            << "mount?" << atLeastOneIsMounted
            << "raid?" << isInactiveRAID;
            force_uncheck( m_grp, m_eraseOption );
        }

        bool isEfi = PartUtils::isEfiSystem();
    bool efiSystemPartitionFound = !m_core->efiSystemPartitions().isEmpty();

    if ( isEfi && !efiSystemPartitionFound )
    {
        cWarning() << "System is EFI but there's no EFI system partition, "
        "DISABLING alongside and replace features.";
        m_alongsideOption->hide();
        m_replaceOption->hide();
    }
}

OsproberEntryList
Config::getOsproberEntriesForDevice( Device* device ) const
{
    OsproberEntryList eList;
    for ( const OsproberEntry& entry : m_core->osproberEntries() )
    {
        if ( entry.path.startsWith( device->deviceNode() ) )
            eList.append( entry );
    }
    return eList;
}

bool
Config::isNextEnabled() const
{
    return m_nextEnabled;
}


void
Config::updateNextEnabled()
{
    bool enabled = false;

//     auto sm_p = /*m_beforePartitionBarsView ? m_beforePartitionBarsView->selectionModel() :*/ nullptr;

    switch ( m_installChoice )
    {
        case NoChoice:
            enabled = false;
            break;
        case Replace:
        case Alongside:
//             enabled = sm_p && sm_p->currentIndex().isValid();
            enabled = false;
            break;
        case Erase:
        case Manual:
            enabled = true;
    }

    if ( m_isEfi &&
        ( m_installChoice == Alongside ||
        m_installChoice == Replace ) )
    {
        if ( m_core->efiSystemPartitions().count() == 0 )
            enabled = false;
    }

    if ( m_installChoice != Manual &&
        m_encryptOption->enabled() &&
        m_encryptOption->confirmPassphrase() != m_encryptOption->passphrase() )
        enabled = false;

    if ( enabled == m_nextEnabled )
        return;

    m_nextEnabled = enabled;
    emit nextStatusChanged( enabled );
}

QString
Config::prettyStatus() const
{
    return m_prettyStatus;
}

void
Config::onActivate()
{

}

void
Config::finalize()
{

}

DeviceModel *
Config::devicesModel() const
{
    return m_deviceModel;
}

BootLoaderModel *
Config::bootloaderModel() const
{
    return m_bootloaderModel;
}

SwapChoiceSet
Config::availableSwapChoices() const
{
    return m_availableSwapChoices;
}

Config::InstallChoice Config::installChoice() const
{
    return m_installChoice;
}

void Config::setInstallChoice(const Config::InstallChoice& value)
{
    if(m_installChoice == value)
        return;

    m_installChoice = value;
    emit installChoiceChanged();
}

// void
// Config::updateSwapChoicesTr(QComboBox* box)
// {
//     if ( !box )
//         return;
//
//     static_assert(SwapChoice::NoSwap == 0, "Enum values out-of-sync");
//     for ( int index = 0; index < box->count(); ++index )
//     {
//         bool ok = false;
//         int value = 0;
//
//         switch ( value = box->itemData( index ).toInt( &ok ) )
//         {
//             // case 0:
//             case SwapChoice::NoSwap:
//                 // toInt() returns 0 on failure, so check for ok
//                 if ( ok )  // It was explicitly set to 0
//                     box->setItemText( index, tr( "No Swap" ) );
//                 else
//                     cWarning() << "Box item" << index << box->itemText( index ) << "has non-integer role.";
//                 break;
//             case SwapChoice::ReuseSwap:
//                 box->setItemText( index, tr( "Reuse Swap" ) );
//                 break;
//             case SwapChoice::SmallSwap:
//                 box->setItemText( index, tr( "Swap (no Hibernate)" ) );
//                 break;
//             case SwapChoice::FullSwap:
//                 box->setItemText( index, tr( "Swap (with Hibernate)" ) );
//                 break;
//             case SwapChoice::SwapFile:
//                 box->setItemText( index, tr( "Swap to file" ) );
//                 break;
//             default:
//                 cWarning() << "Box item" << index << box->itemText( index ) << "has role" << value;
//         }
//     }
// }

int
Config::lastSelectedDeviceIndex()
{
    return m_lastSelectedDeviceIndex;
}

void
Config::setLastSelectedDeviceIndex( int index )
{
    m_lastSelectedDeviceIndex = index;
    m_deviceModel->setCurrentIndex( m_lastSelectedDeviceIndex );
}


