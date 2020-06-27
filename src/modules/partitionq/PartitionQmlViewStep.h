/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2014, Aurélien Gâteau <agateau@kde.org>
 *   Copyright 2014-2016, Teo Mrnjavac <teo@kde.org>
 *   Copyright 2017, Adriaan de Groot <groot@kde.org>
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

#ifndef PARTITIONQMLVIEWSTEP_H
#define PARTITIONQMLVIEWSTEP_H

#include "utils/PluginFactory.h"
#include "viewpages/QmlViewStep.h"

#include "DllMacro.h"

#include "core/PartitionActions.h"
#include "Config.h"

#include <QObject>
#include <QSet>

class PartitionCoreModule;

template<typename T> class QFutureWatcher;

/**
 * The starting point of the module. Instantiates PartitionCoreModule,
 * ChoicePage and PartitionPage, then connects them.
 */
class PLUGINDLLEXPORT PartitionQmlViewStep : public Calamares::QmlViewStep
{
    Q_OBJECT

public:
    explicit PartitionQmlViewStep( QObject* parent = nullptr );
    virtual ~PartitionQmlViewStep() override;

    QString prettyName() const override;
    QString prettyStatus() const override;
    //     QWidget* createSummaryWidget() const override;

    void next() override;
    void back() override;

    bool isNextEnabled() const override;
    bool isBackEnabled() const override;

    bool isAtBeginning() const override;
    bool isAtEnd() const override;

    void onActivate() override;
    void onLeave() override;

    void setConfigurationMap( const QVariantMap& configurationMap ) override;

    Calamares::JobList jobs() const override;

    Calamares::RequirementsList checkRequirements() override;

    QObject * getConfig() override
    {
        return m_config;
    }

private:
    void initPartitionCoreModule();
    void continueLoading();

    PartitionCoreModule* m_core;
//     QStackedWidget*   m_widget;
//     ChoicePage*       m_choicePage;
//     PartitionPage*    m_manualPartitionPage;

//     WaitingWidget* m_waitingWidget;
    QFutureWatcher<void>* m_future;

    QSet< PartitionActions::Choices::SwapChoice > m_swapChoices;

    qreal m_requiredStorageGiB;  // May duplicate setting in the welcome module
    Config *m_config;
};

CALAMARES_PLUGIN_FACTORY_DECLARATION( PartitionQmlViewStepFactory )

#endif // PARTITIONQMLVIEWSTEP_H
