/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2014, Aurélien Gâteau <agateau@kde.org>
 *   Copyright 2015, Teo Mrnjavac <teo@kde.org>
 *   Copyright 2019, Adriaan de Groot <groot@kde.org>
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

#include "core/BootLoaderModel.h"

#include "core/KPMHelpers.h"
#include "core/PartitionInfo.h"
#include "utils/Logger.h"

// KPMcore
#include <kpmcore/core/device.h>

#include <QComboBox>

static QStandardItem*
createBootLoaderItem( const QString& description, const QString& path, bool isPartition )
{
    QStandardItem* item = new QStandardItem( description );
    item->setData( path, BootLoaderModel::BootLoaderPathRole );
    item->setData( isPartition, BootLoaderModel::IsPartitionRole );
    return item;
}

BootLoaderModel::BootLoaderModel( QObject* parent )
: QStandardItemModel( parent )
{
}

BootLoaderModel::~BootLoaderModel() {}

void
BootLoaderModel::init( const QList< Device* >& devices )
{
    cDebug() << "BLM::init with" << devices.count() << "devices" << rowCount() << "rows";
    beginResetModel();
    blockSignals( true );

    m_devices = devices;
    updateInternal();

    blockSignals( false );
    endResetModel();
}

void
BootLoaderModel::createMbrItems()
{
    for ( auto device : m_devices )
    {
        QString text = tr( "Master Boot Record of %1" ).arg( device->name() );
        appendRow( createBootLoaderItem( text, device->deviceNode(), false ) );
    }
}

void
BootLoaderModel::update()
{
    cDebug() << "BLM::update holds" << m_devices.count() << "devices" << rowCount() << "rows";
    beginResetModel();
    blockSignals( true );
    updateInternal();
    blockSignals( false );
    endResetModel();
}


void
BootLoaderModel::updateInternal()
{
    QMutexLocker lock( &m_lock );
    clear();
    createMbrItems();

    // An empty model is possible if you don't havee permissions: don't crash though.
    if ( rowCount() < 1 )
    {
        return;
    }

    QString partitionText;
    Partition* partition = KPMHelpers::findPartitionByMountPoint( m_devices, "/boot" );
    if ( partition )
    {
        partitionText = tr( "Boot Partition" );
    }
    else
    {
        partition = KPMHelpers::findPartitionByMountPoint( m_devices, "/" );
        if ( partition )
        {
            partitionText = tr( "System Partition" );
        }
    }

    Q_ASSERT( rowCount() > 0 );
    QStandardItem* last = item( rowCount() - 1 );
    Q_ASSERT( last );
    bool lastIsPartition = last->data( IsPartitionRole ).toBool();

    if ( !partition )
    {
        if ( lastIsPartition )
        {
            takeRow( rowCount() - 1 );
        }
    }
    else
    {
        QString mountPoint = PartitionInfo::mountPoint( partition );
        if ( lastIsPartition )
        {
            last->setText( partitionText );
            last->setData( mountPoint, BootLoaderPathRole );
        }
        else
        {
            appendRow( createBootLoaderItem( partitionText, PartitionInfo::mountPoint( partition ), true ) );
        }

        // Create "don't install bootloader" item
        appendRow( createBootLoaderItem( tr( "Do not install a boot loader" ), QString(), false ) );
    }
}


QVariant
BootLoaderModel::data( const QModelIndex& index, int role ) const
{
    QMutexLocker lock( &m_lock );
    if ( role == Qt::DisplayRole )
    {
        QString displayRole = QStandardItemModel::data( index, Qt::DisplayRole ).toString();
        QString pathRole = QStandardItemModel::data( index, BootLoaderModel::BootLoaderPathRole ).toString();
        if ( pathRole.isEmpty() )
        {
            return displayRole;
        }

        return tr( "%1 (%2)" ).arg( displayRole, pathRole );
    }
    return QStandardItemModel::data( index, role );
}

int
BootLoaderModel::rowCount( const QModelIndex& parent ) const
{
    return parent.isValid() ? 0 : m_devices.count();
}

QHash< int, QByteArray >
BootLoaderModel::roleNames() const
{
    return  { { Roles::Display, "display" },
    { Roles::BootLoaderPathRole, "path" },
    { Roles::IsPartitionRole, "ispartition" }};
}

void BootLoaderModel::restoreSelectedBootLoader(const QString& path)
{
    if ( rowCount() < 1 )
    {
        cDebug() << "No items in BootLoaderModel";
        return;
    }

    auto findBootloader = [&]( const QString& path ) -> int
    {
        for ( int i = 0; i < rowCount(); ++i )
        {
            const auto index_ = index( i, 0, QModelIndex() );
            if ( !index_.isValid() )
            {
                continue;
            }
            QVariant var = data( index_, BootLoaderModel::BootLoaderPathRole );
            if ( var.isValid() && var.toString() == path )
            {
                return i;
            }
        }

        return -1;
    };

    int r = -1;
    if ( path.isEmpty() )
    {
        setCurrentIndex( 0 );
    }
    else if ( ( r = findBootloader( path ) ) >= 0 )
    {
        setCurrentIndex( r );
    }
    else
    {
        setCurrentIndex( 0 );
    }
}

namespace Calamares
{
int
findBootloader( const QAbstractItemModel* model, const QString& path )
{
    for ( int i = 0; i < model->rowCount(); ++i )
    {
        const auto index = model->index( i, 0, QModelIndex() );
        if ( !index.isValid() )
        {
            continue;
        }
        QVariant var = model->data( index, BootLoaderModel::BootLoaderPathRole );
        if ( var.isValid() && var.toString() == path )
        {
            return i;
        }
    }

    return -1;
}

void
restoreSelectedBootLoader( QComboBox& combo, const QString& path )
{
    const auto* model = combo.model();
    if ( model->rowCount() < 1 )
    {
        cDebug() << "No items in BootLoaderModel";
        return;
    }

    int r = -1;
    if ( path.isEmpty() )
    {
        combo.setCurrentIndex( 0 );
    }
    else if ( ( r = findBootloader( model, path ) ) >= 0 )
    {
        combo.setCurrentIndex( r );
    }
    else
    {
        combo.setCurrentIndex( 0 );
    }
}

}  // namespace Calamares
