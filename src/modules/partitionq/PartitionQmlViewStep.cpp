/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2014, Aurélien Gâteau <agateau@kde.org>
 *   Copyright 2014-2017, Teo Mrnjavac <teo@kde.org>
 *   Copyright 2018-2019, 2020, Adriaan de Groot <groot@kde.org>
 *   Copyright 2019, Collabora Ltd <arnaud.ferraris@collabora.com>
 *   Copyright 2020, Anke Boersma <demm@kaosx.us
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

#include "PartitionQmlViewStep.h"

// #include "core/KPMHelpers.h"
// #include "core/OsproberEntry.h"
// #include "core/PartUtils.h"
// #include "core/PartitionActions.h"
#include "core/PartitionCoreModule.h"
#include "core/PartitionModel.h"
#include "core/DeviceModel.h"


#include "Branding.h"
#include "CalamaresVersion.h"
#include "GlobalStorage.h"
#include "Job.h"
#include "JobQueue.h"
#include "utils/CalamaresUtilsGui.h"
#include "utils/Logger.h"
#include "utils/NamedEnum.h"
#include "utils/Retranslator.h"
#include "utils/Variant.h"
#include "Config.h"

#include <kpmcore/core/device.h>
#include <kpmcore/core/partition.h>
#include <kpmcore/fs/filesystem.h>

#include <QApplication>
#include <QDir>
#include <QFutureWatcher>
#include <QProcess>
#include <QTimer>
#include <QtConcurrent/QtConcurrent>

PartitionQmlViewStep::PartitionQmlViewStep( QObject* parent )
: Calamares::QmlViewStep( parent )
, m_core( nullptr )
// , m_choicePage( nullptr )
// , m_manualPartitionPage( nullptr )
, m_requiredStorageGiB( 0.0 )
, m_config( new Config(this) )

{
//     m_widget->setContentsMargins( 0, 0, 0, 0 );

//     m_waitingWidget = new WaitingWidget( QString() );
//     m_widget->addWidget( m_waitingWidget );
//     CALAMARES_RETRANSLATE( m_waitingWidget->setText( tr( "Gathering system information..." ) ); )

    m_core = new PartitionCoreModule( this );  // Unusable before init is complete!
    // We're not done loading, but we need the configuration map first.
}

void
PartitionQmlViewStep::initPartitionCoreModule()
{
    cDebug()<< "init parition core module" << m_core->deviceModel()->rowCount();

    Q_ASSERT( m_core );
    cDebug()<< "init parition core module" << m_core->deviceModel()->rowCount();

    m_core->init();
    cDebug()<< "init parition core module" << m_core->deviceModel()->rowCount();

}

void
PartitionQmlViewStep::continueLoading()
{
//     Q_ASSERT( !m_choicePage );
//     m_choicePage = new ChoicePage( m_swapChoices );
    m_config->init( m_swapChoices, m_core );
    cDebug()<< "init config" << m_core->deviceModel()->rowCount();

//     m_widget->addWidget( m_choicePage );

    // Instantiate the manual partitioning page as needed.
    //
//     Q_ASSERT( !m_manualPartitionPage );
    // m_manualPartitionPage = new PartitionPage( m_core );
    // m_widget->addWidget( m_manualPartitionPage );

//     m_widget->removeWidget( m_waitingWidget );
//     m_waitingWidget->deleteLater();
//     m_waitingWidget = nullptr;

//     connect( m_core, &PartitionCoreModule::hasRootMountPointChanged, this, &PartitionQmlViewStep::nextStatusChanged );
//     connect( m_choicePage, &ChoicePage::nextStatusChanged, this, &PartitionQmlViewStep::nextStatusChanged );
}


PartitionQmlViewStep::~PartitionQmlViewStep()
{
//     if ( m_choicePage && m_choicePage->parent() == nullptr )
//     {
//         m_choicePage->deleteLater();
//     }
//     if ( m_manualPartitionPage && m_manualPartitionPage->parent() == nullptr )
//     {
//         m_manualPartitionPage->deleteLater();
//     }
}


QString
PartitionQmlViewStep::prettyName() const
{
    return tr( "Partitions" );
}

QString PartitionQmlViewStep::prettyStatus() const
{
    QString jobsLabel, modeText, diskInfoLabel;

    Config::InstallChoice choice = m_config->installChoice();
    const auto* branding = Calamares::Branding::instance();

    QList< PartitionCoreModule::SummaryInfo > list = m_core->createSummaryInfo();

    cDebug() << "Summary for Partition" << list.length() << choice;
    if ( list.length() > 1 )  // There are changes on more than one disk
    {
//         NOTE: all of this should only happen when Manual partitioning is active.
//         Any other choice should result in a list.length() == 1.
        switch ( choice )
        {
            case Config::Alongside:
                modeText = tr( "Install %1 <strong>alongside</strong> another operating system." )
                .arg( branding->shortVersionedName() );
                break;
            case Config::Erase:
                modeText
                = tr( "<strong>Erase</strong> disk and install %1." ).arg( branding->shortVersionedName() );
                break;
            case Config::Replace:
                modeText
                = tr( "<strong>Replace</strong> a partition with %1." ).arg( branding->shortVersionedName() );
                break;
            case Config::NoChoice:
            case Config::Manual:
                modeText = tr( "<strong>Manual</strong> partitioning." );
        }
    }

    for ( const auto& info : list )
    {
        if ( list.length() == 1 )  // this is the only disk preview
        {
            switch ( choice )
            {
                case Config::Alongside:
                    diskInfoLabel = tr( "Install %1 <strong>alongside</strong> another operating system on disk "
                    "<strong>%2</strong> (%3)." )
                    .arg( branding->shortVersionedName() )
                    .arg( info.deviceNode )
                    .arg( info.deviceName );
                    break;
                case Config::Erase:
                    diskInfoLabel = tr( "<strong>Erase</strong> disk <strong>%2</strong> (%3) and install %1." )
                    .arg( branding->shortVersionedName() )
                    .arg( info.deviceNode )
                    .arg( info.deviceName );
                    break;
                case Config::Replace:
                    diskInfoLabel = tr( "<strong>Replace</strong> a partition on disk <strong>%2</strong> (%3) with %1." )
                    .arg( branding->shortVersionedName() )
                    .arg( info.deviceNode )
                    .arg( info.deviceName );
                    break;
                case Config::NoChoice:
                case Config::Manual:
                    diskInfoLabel = tr( "<strong>Manual</strong> partitioning on disk <strong>%1</strong> (%2)." )
                    .arg( info.deviceNode )
                    .arg( info.deviceName );
            }
        }
        else  // multiple disk previews!
        {
            diskInfoLabel =  tr( "Disk <strong>%1</strong> (%2)" ).arg( info.deviceNode ).arg( info.deviceName ) ;
        }
    }

    QStringList jobsLines;
    foreach ( const Calamares::job_ptr& job, jobs() )
    {
        if ( !job->prettyDescription().isEmpty() )
        {
            jobsLines.append( job->prettyDescription() );
        }
    }
    if ( !jobsLines.isEmpty() )
    {
        jobsLabel = jobsLines.join( "<br/>" );
    }

    return diskInfoLabel + "<br/>" + jobsLabel;
}

void
PartitionQmlViewStep::next()
{/*
    if ( m_choicePage == m_widget->currentWidget() )
    {
        if ( m_choicePage->currentChoice() == ChoicePage::Manual )
        {
            if ( !m_manualPartitionPage )
            {
                m_manualPartitionPage = new PartitionPage( m_core );
                m_widget->addWidget( m_manualPartitionPage );
            }

            m_widget->setCurrentWidget( m_manualPartitionPage );
            m_manualPartitionPage->selectDeviceByIndex( m_choicePage->lastSelectedDeviceIndex() );
            if ( m_core->isDirty() )
            {
                m_manualPartitionPage->onRevertClicked();
            }
        }
        cDebug() << "Choice applied: " << m_choicePage->currentChoice();
    }*/
}


void
PartitionQmlViewStep::back()
{
//     if ( m_widget->currentWidget() != m_choicePage )
//     {
//         m_widget->setCurrentWidget( m_choicePage );
//         m_choicePage->setLastSelectedDeviceIndex( m_manualPartitionPage->selectedDeviceIndex() );
//
//         if ( m_manualPartitionPage )
//         {
//             m_manualPartitionPage->deleteLater();
//             m_manualPartitionPage = nullptr;
//         }
//     }
}


bool
PartitionQmlViewStep::isNextEnabled() const
{
//     if ( m_choicePage && m_widget->currentWidget() == m_choicePage )
//     {
//         return m_choicePage->isNextEnabled();
//     }
//
//     if ( m_manualPartitionPage && m_widget->currentWidget() == m_manualPartitionPage )
//     {
//         return m_core->hasRootMountPoint();
//     }

//     return false;
    return true;
}


bool
PartitionQmlViewStep::isBackEnabled() const
{
    return true;
}


bool
PartitionQmlViewStep::isAtBeginning() const
{
//     if ( m_widget->currentWidget() != m_choicePage )
//     {
//         return false;
//     }
    return true;
}


bool
PartitionQmlViewStep::isAtEnd() const
{
//     if ( m_widget->currentWidget() == m_choicePage )
//     {
//         if ( m_choicePage->currentChoice() == ChoicePage::Erase || m_choicePage->currentChoice() == ChoicePage::Replace
//             || m_choicePage->currentChoice() == ChoicePage::Alongside )
//         {
//             return true;
//         }
//         return false;
//     }
    return true;
}


void
PartitionQmlViewStep::onActivate()
{
    // If there's no setting (e.g. from the welcome page) for required storage
    // then use ours, if it was set.
    auto* gs = Calamares::JobQueue::instance() ? Calamares::JobQueue::instance()->globalStorage() : nullptr;
    if ( m_requiredStorageGiB >= 0.0 && gs && !gs->contains( "requiredStorageGiB" ) )
    {
        gs->insert( "requiredStorageGiB", m_requiredStorageGiB );
    }

    // if we're coming back to PVS from the next VS
//     if ( m_widget->currentWidget() == m_choicePage && m_choicePage->currentChoice() == ChoicePage::Alongside )
//     {
//         m_choicePage->applyActionChoice( ChoicePage::Alongside );
//                m_choicePage->reset();
//         FIXME: ReplaceWidget should be reset maybe?
//     }
}


void
PartitionQmlViewStep::onLeave()
{
//     if ( m_widget->currentWidget() == m_choicePage )
//     {
        m_config->onLeave();
//         return;
//     }
//
//     if ( m_widget->currentWidget() == m_manualPartitionPage )
//     {
//         if ( PartUtils::isEfiSystem() )
//         {
//             QString espMountPoint
//             = Calamares::JobQueue::instance()->globalStorage()->value( "efiSystemPartition" ).toString();
//             Partition* esp = m_core->findPartitionByMountPoint( espMountPoint );
//
//             QString message;
//             QString description;
//             if ( !esp )
//             {
//                 message = tr( "No EFI system partition configured" );
//                 description = tr( "An EFI system partition is necessary to start %1."
//                 "<br/><br/>"
//                 "To configure an EFI system partition, go back and "
//                 "select or create a FAT32 filesystem with the "
//                 "<strong>esp</strong> flag enabled and mount point "
//                 "<strong>%2</strong>.<br/><br/>"
//                 "You can continue without setting up an EFI system "
//                 "partition but your system may fail to start." )
//                 .arg( *Calamares::Branding::ShortProductName )
//                 .arg( espMountPoint );
//             }
//             else if ( esp && !PartUtils::isEfiBootable( esp ) )
//             {
//                 message = tr( "EFI system partition flag not set" );
//                 description = tr( "An EFI system partition is necessary to start %1."
//                 "<br/><br/>"
//                 "A partition was configured with mount point "
//                 "<strong>%2</strong> but its <strong>esp</strong> "
//                 "flag is not set.<br/>"
//                 "To set the flag, go back and edit the partition."
//                 "<br/><br/>"
//                 "You can continue without setting the flag but your "
//                 "system may fail to start." )
//                 .arg( *Calamares::Branding::ShortProductName )
//                 .arg( espMountPoint );
//             }
//
//             if ( !message.isEmpty() )
//             {
//                 cWarning() << message;
//                 QMessageBox::warning( m_manualPartitionPage, message, description );
//             }
//         }
//         else
//         {
//
//             cDebug() << "device: BIOS";
//             TODO: this *always* warns, which might be annoying, so it'd be
//                   best to find a way to detect that bios_grub partition.
//
//             QString message = tr( "Option to use GPT on BIOS" );
//             QString description = tr( "A GPT partition table is the best option for all "
//             "systems. This installer supports such a setup for "
//             "BIOS systems too."
//             "<br/><br/>"
//             "To configure a GPT partition table on BIOS, "
//             "(if not done so already) go back "
//             "and set the partition table to GPT, next create a 8 MB "
//             "unformatted partition with the "
//             "<strong>bios_grub</strong> flag enabled.<br/><br/>"
//             "An unformatted 8 MB partition is necessary "
//             "to start %1 on a BIOS system with GPT." )
//             .arg( *Calamares::Branding::ShortProductName );
//
//             QMessageBox::information( m_manualPartitionPage, message, description );
//         }
//
//         Partition* root_p = m_core->findPartitionByMountPoint( "/" );
//         Partition* boot_p = m_core->findPartitionByMountPoint( "/boot" );
//
//         if ( root_p and boot_p )
//         {
//             QString message;
//             QString description;
//
//             If the root partition is encrypted, and there's a separate boot
//             partition which is not encrypted
//             if ( root_p->fileSystem().type() == FileSystem::Luks && boot_p->fileSystem().type() != FileSystem::Luks )
//             {
//                 message = tr( "Boot partition not encrypted" );
//                 description = tr( "A separate boot partition was set up together with "
//                 "an encrypted root partition, but the boot partition "
//                 "is not encrypted."
//                 "<br/><br/>"
//                 "There are security concerns with this kind of "
//                 "setup, because important system files are kept "
//                 "on an unencrypted partition.<br/>"
//                 "You may continue if you wish, but filesystem "
//                 "unlocking will happen later during system startup."
//                 "<br/>To encrypt the boot partition, go back and "
//                 "recreate it, selecting <strong>Encrypt</strong> "
//                 "in the partition creation window." );
//
//                 QMessageBox::warning( m_manualPartitionPage, message, description );
//             }
//         }
//     }
}


void
PartitionQmlViewStep::setConfigurationMap( const QVariantMap& configurationMap )
{

    cDebug()<< "init config files for parittion";

    // Copy the efiSystemPartition setting to the global storage. It is needed not only in
    // the EraseDiskPage, but also in the bootloader configuration modules (grub, bootloader).
    Calamares::GlobalStorage* gs = Calamares::JobQueue::instance()->globalStorage();
    QString efiSP = CalamaresUtils::getString( configurationMap, "efiSystemPartition" );
    if ( efiSP.isEmpty() )
    {
        efiSP = QStringLiteral( "/boot/efi" );
    }
    gs->insert( "efiSystemPartition", efiSP );

    // Set up firmwareType global storage entry. This is used, e.g. by the bootloader module.
    QString firmwareType( PartUtils::isEfiSystem() ? QStringLiteral( "efi" ) : QStringLiteral( "bios" ) );
    cDebug() << "Setting firmwareType to" << firmwareType;
    gs->insert( "firmwareType", firmwareType );

    // Read and parse key efiSystemPartitionSize
    if ( configurationMap.contains( "efiSystemPartitionSize" ) )
    {
        gs->insert( "efiSystemPartitionSize", CalamaresUtils::getString( configurationMap, "efiSystemPartitionSize" ) );
    }

    // SWAP SETTINGS
    //
    // This is a bit convoluted because there's legacy settings to handle as well
    // as the new-style list of choices, with mapping back-and-forth.
    if ( configurationMap.contains( "userSwapChoices" )
        && ( configurationMap.contains( "ensureSuspendToDisk" ) || configurationMap.contains( "neverCreateSwap" ) ) )
    {
        cError() << "Partition-module configuration mixes old- and new-style swap settings.";
    }

    if ( configurationMap.contains( "ensureSuspendToDisk" ) )
    {
        cWarning() << "Partition-module setting *ensureSuspendToDisk* is deprecated.";
    }
    bool ensureSuspendToDisk = CalamaresUtils::getBool( configurationMap, "ensureSuspendToDisk", true );

    if ( configurationMap.contains( "neverCreateSwap" ) )
    {
        cWarning() << "Partition-module setting *neverCreateSwap* is deprecated.";
    }
    bool neverCreateSwap = CalamaresUtils::getBool( configurationMap, "neverCreateSwap", false );

    QSet< PartitionActions::Choices::SwapChoice > choices;  // Available swap choices
    if ( configurationMap.contains( "userSwapChoices" ) )
    {
        // We've already warned about overlapping settings with the
        // legacy *ensureSuspendToDisk* and *neverCreateSwap*.
        QStringList l = configurationMap[ "userSwapChoices" ].toStringList();

        for ( const auto& item : l )
        {
            bool ok = false;
            auto v = PartitionActions::Choices::nameToChoice( item, ok );
            if ( ok )
            {
                choices.insert( v );
            }
        }

        if ( choices.isEmpty() )
        {
            cWarning() << "Partition-module configuration for *userSwapChoices* is empty:" << l;
            choices.insert( PartitionActions::Choices::SwapChoice::FullSwap );
        }

        // suspend if it's one of the possible choices; suppress swap only if it's
        // the **only** choice available.
        ensureSuspendToDisk = choices.contains( PartitionActions::Choices::SwapChoice::FullSwap );
        neverCreateSwap = ( choices.count() == 1 ) && choices.contains( PartitionActions::Choices::SwapChoice::NoSwap );
    }
    else
    {
        // Convert the legacy settings into a single setting for now.
        if ( neverCreateSwap )
        {
            choices.insert( PartitionActions::Choices::SwapChoice::NoSwap );
        }
        else if ( ensureSuspendToDisk )
        {
            choices.insert( PartitionActions::Choices::SwapChoice::FullSwap );
        }
        else
        {
            choices.insert( PartitionActions::Choices::SwapChoice::SmallSwap );
        }
    }

    // Not all are supported right now // FIXME
    static const char unsupportedSetting[] = "Partition-module does not support *userSwapChoices* setting";

    #define COMPLAIN_UNSUPPORTED( x ) \
    if ( choices.contains( x ) ) \
    { \
        cWarning() << unsupportedSetting << PartitionActions::Choices::choiceToName( x ); \
        choices.remove( x ); \
    }

    COMPLAIN_UNSUPPORTED( PartitionActions::Choices::SwapChoice::SwapFile )
    COMPLAIN_UNSUPPORTED( PartitionActions::Choices::SwapChoice::ReuseSwap )
    #undef COMPLAIN_UNSUPPORTED

    m_swapChoices = choices;

    // Settings that overlap with the Welcome module
    m_requiredStorageGiB = CalamaresUtils::getDouble( configurationMap, "requiredStorage", -1.0 );

    // These gs settings seem to be unused (in upstream Calamares) outside of
    // the partition module itself.
    gs->insert( "ensureSuspendToDisk", ensureSuspendToDisk );
    gs->insert( "neverCreateSwap", neverCreateSwap );

    // OTHER SETTINGS
    //
    gs->insert( "drawNestedPartitions", CalamaresUtils::getBool( configurationMap, "drawNestedPartitions", false ) );
    gs->insert( "alwaysShowPartitionLabels",
                CalamaresUtils::getBool( configurationMap, "alwaysShowPartitionLabels", true ) );
    gs->insert( "enableLuksAutomatedPartitioning",
                CalamaresUtils::getBool( configurationMap, "enableLuksAutomatedPartitioning", true ) );
    gs->insert( "allowManualPartitioning",
                CalamaresUtils::getBool( configurationMap, "allowManualPartitioning", true ) );

    // The defaultFileSystemType setting needs a bit more processing,
    // as we want to cover various cases (such as different cases)
    QString fsName = CalamaresUtils::getString( configurationMap, "defaultFileSystemType" );
    FileSystem::Type fsType;
    if ( fsName.isEmpty() )
    {
        cWarning() << "Partition-module setting *defaultFileSystemType* is missing, will use ext4";
    }
    QString fsRealName = PartUtils::findFS( fsName, &fsType );
    if ( fsRealName == fsName )
    {
        cDebug() << "Partition-module setting *defaultFileSystemType*" << fsRealName;
    }
    else if ( fsType != FileSystem::Unknown )
    {
        cWarning() << "Partition-module setting *defaultFileSystemType* changed" << fsRealName;
    }
    else
    {
        cWarning() << "Partition-module setting *defaultFileSystemType* is bad (" << fsName << ") using" << fsRealName
        << "instead.";
    }
    gs->insert( "defaultFileSystemType", fsRealName );


    // Now that we have the config, we load the PartitionCoreModule in the background
    // because it could take a while. Then when it's done, we can set up the widgets
    // and remove the spinner.
    m_future = new QFutureWatcher< void >();
    connect( m_future, &QFutureWatcher< void >::finished, this, [this] {
        continueLoading();
        this->m_future->deleteLater();
        this->m_future = nullptr;
    } );

    QFuture< void > future = QtConcurrent::run( this, &PartitionQmlViewStep::initPartitionCoreModule );
    m_future->setFuture( future );

    cDebug()<< "init 22 config files for parittion";


    if ( configurationMap.contains( "partitionLayout" ) )
    {
        m_core->initLayout( configurationMap.values( "partitionLayout" ).at( 0 ).toList() );
    }
    else
    {
        m_core->initLayout();
    }

    Calamares::QmlViewStep::setConfigurationMap( configurationMap ); // call parent implementation last
}


Calamares::JobList
PartitionQmlViewStep::jobs() const
{
    return m_core->jobs();
}

Calamares::RequirementsList
PartitionQmlViewStep::checkRequirements()
{
    if ( m_future )
    {
        m_future->waitForFinished();
    }

    Calamares::RequirementsList l;
    l.append( {
        QLatin1String( "partitions" ),
              [] { return tr( "has at least one disk device available." ); },
              [] { return tr( "There are no partitions to install on." ); },
              m_core->deviceModel()->rowCount() > 0,  // satisfied
              #ifdef DEBUG_PARTITION_UNSAFE
              false  // optional
              #else
              true  // required
              #endif
    } );

    return l;
}


CALAMARES_PLUGIN_FACTORY_DEFINITION( PartitionQmlViewStepFactory, registerPlugin< PartitionQmlViewStep >(); )
