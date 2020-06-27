/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2018, Caio Jordão Carvalho <caiojcarvalho@gmail.com>
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

#include "VolumeGroupBaseDialog.h"
#include "ui_VolumeGroupBaseDialog.h"

#include "gui/ListPhysicalVolumeWidgetItem.h"

#include <kpmcore/util/capacity.h>

#include <QComboBox>
#include <QDialogButtonBox>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpinBox>

VolumeGroupBaseDialog::VolumeGroupBaseDialog( QString& vgName,
                                              QVector< const Partition* > pvList,
                                              QWidget *parent )
    : QDialog(parent)
    , ui(new Ui::VolumeGroupBaseDialog)
    , m_vgNameValue(vgName)
    , m_totalSizeValue(0)
    , m_usedSizeValue(0)
{
    ui->setupUi(this);

    for ( const Partition* p : pvList )
        ui->pvList->addItem( new ListPhysicalVolumeWidgetItem( p, false ) );

    ui->vgType->addItems( QStringList() << "LVM" << "RAID" );
    ui->vgType->setCurrentIndex(0);

    QRegularExpression re(R"(^(?!_|\.)[\w\-.+]+)");
    ui->vgName->setValidator( new QRegularExpressionValidator( re, this ) );
    ui->vgName->setText( m_vgNameValue );

    updateOkButton();
    updateTotalSize();

    connect( ui->pvList, &QListWidget::itemChanged, this,
             [&](QListWidgetItem*) {
                updateTotalSize();
                updateOkButton();
            } );

    connect( ui->peSize, qOverload<int>(&QSpinBox::valueChanged), this,
             [&](int) {
                updateTotalSectors();
                updateOkButton();
            });

    connect( ui->vgName, &QLineEdit::textChanged, this,
             [&](const QString&) {
                updateOkButton();
            });
}

VolumeGroupBaseDialog::~VolumeGroupBaseDialog()
{
    delete ui;
}

QVector< const Partition* >
VolumeGroupBaseDialog::checkedItems() const
{
    QVector< const Partition* > items;

    for ( int i = 0; i < ui->pvList->count(); i++) {
        ListPhysicalVolumeWidgetItem* item = dynamic_cast< ListPhysicalVolumeWidgetItem* >( ui->pvList->item(i) );

        if ( item && item->checkState() == Qt::Checked )
            items << item->partition();
    }

    return items;
}

bool
VolumeGroupBaseDialog::isSizeValid() const
{
    return m_totalSizeValue >= m_usedSizeValue;
}

void
VolumeGroupBaseDialog::updateOkButton()
{
    okButton()->setEnabled(isSizeValid() &&
                         !checkedItems().empty() &&
                         !ui->vgName->text().isEmpty() &&
                         ui->peSize->value() > 0);
}

void
VolumeGroupBaseDialog::setUsedSizeValue( qint64 usedSize )
{
    m_usedSizeValue = usedSize;

    ui->usedSize->setText( Capacity::formatByteSize(m_usedSizeValue) );
}

void
VolumeGroupBaseDialog::setLVQuantity( qint32 lvQuantity )
{
    ui->lvQuantity->setText( QString::number( lvQuantity ) );
}

void
VolumeGroupBaseDialog::updateTotalSize()
{
    m_totalSizeValue = 0;

    for ( const Partition *p : checkedItems())
        m_totalSizeValue += p->capacity() - p->capacity() % (ui->peSize->value() * Capacity::unitFactor(Capacity::Unit::Byte, Capacity::Unit::MiB));

    ui->totalSize->setText(Capacity::formatByteSize(m_totalSizeValue));

    updateTotalSectors();
}

void
VolumeGroupBaseDialog::updateTotalSectors()
{
    qint64 totalSectors = 0;

    qint64 extentSize = ui->peSize->value() * Capacity::unitFactor(Capacity::Unit::Byte, Capacity::Unit::MiB);

    if ( extentSize > 0 )
        totalSectors = m_totalSizeValue / extentSize;

    ui->totalSectors->setText( QString::number( totalSectors ) );
}

QString&
VolumeGroupBaseDialog::vgNameValue() const
{
    return m_vgNameValue;
}

QLineEdit*
VolumeGroupBaseDialog::vgName() const
{
    return ui->vgName;
}

QComboBox*
VolumeGroupBaseDialog::vgType() const
{
    return ui->vgType;
}

QSpinBox*
VolumeGroupBaseDialog::peSize() const
{
    return ui->peSize;
}

QListWidget*
VolumeGroupBaseDialog::pvList() const
{
    return ui->pvList;
}

QPushButton*
VolumeGroupBaseDialog::okButton() const
{
    return ui->buttonBox->button( QDialogButtonBox::StandardButton::Ok );
}
