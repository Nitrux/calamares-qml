/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2014-2015, Teo Mrnjavac <teo@kde.org>
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

#ifndef FINISHEDQMLVIEWSTEP_H
#define FINISHEDQMLVIEWSTEP_H

#include <QObject>

#include "utils/PluginFactory.h"
#include "viewpages/QmlViewStep.h"

#include "DllMacro.h"
#include "Config.h"

class PLUGINDLLEXPORT FinishedQmlViewStep : public Calamares::QmlViewStep
{
    Q_OBJECT

public:
    explicit FinishedQmlViewStep( QObject* parent = nullptr );

    QString prettyName() const override;

    bool isNextEnabled() const override;
    bool isBackEnabled() const override;

    bool isAtBeginning() const override;
    bool isAtEnd() const override;

    void onActivate() override;

    Calamares::JobList jobs() const override;

    void setConfigurationMap( const QVariantMap& configurationMap ) override;

    QObject * getConfig() override
    {
        return m_config;
    }

public slots:
    void onInstallationFailed( const QString& message, const QString& details );

private:
    Config* m_config;

    /**
     * @brief At the end of installation (when this step is activated),
     *      send a desktop notification via DBus that the install is done.
     */
    void sendNotification();

    bool installFailed;
    bool m_notifyOnFinished;
};

CALAMARES_PLUGIN_FACTORY_DECLARATION( FinishedQmlViewStepFactory )

#endif
