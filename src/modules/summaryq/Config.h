
/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2019-2020, Adriaan de Groot <groot@kde.org>
 *   Copyright 2020, Camilo Higuita <milo.h@aol.com>
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

#ifndef SUMMARY_CONFIG_H
#define SUMMARY_CONFIG_H

#include <QObject>
#include <QAbstractListModel>
#include <QQmlParserStatus>
#include "viewpages/ViewStep.h"

class SummaryQmlViewStep;

struct StepSummary
{
    QString title;
    QString message;
};

class SummaryModel : public QAbstractListModel
{
  Q_OBJECT
public:
    explicit SummaryModel(QObject *parent = nullptr);
    int rowCount( const QModelIndex& = QModelIndex() ) const override;
    QVariant data( const QModelIndex& index, int role ) const override;

    void setSummary(const Calamares::ViewStepList &steps);

protected:
    QHash< int, QByteArray > roleNames() const override;
private:
    QVector<StepSummary*> m_summary;
};

class Config : public QObject, public QQmlParserStatus
{
    Q_OBJECT
    Q_PROPERTY(QString message MEMBER m_message NOTIFY messageChanged CONSTANT)
    Q_PROPERTY(QString title MEMBER m_title NOTIFY titleChanged CONSTANT)
    Q_PROPERTY(SummaryModel * summaryModel READ summaryModel CONSTANT FINAL)

public:
    explicit Config(QObject *parent = nullptr);
    virtual void componentComplete() override;
    virtual void classBegin() override {}

    void refresh();
    void init();

    SummaryModel * summaryModel() const
    {
        return m_summary;
    }

private:
    Calamares::ViewStepList stepsForSummary( const Calamares::ViewStepList& allSteps ) const;
    const SummaryQmlViewStep* m_thisViewStep;
    SummaryModel *m_summary;

    QString m_message;
    QString m_title;

signals:
    void messageChanged();
    void titleChanged();
};
#endif
