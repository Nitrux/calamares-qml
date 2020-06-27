/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2014-2015, Teo Mrnjavac <teo@kde.org>
 *   Copyright 2017, 2019, Adriaan de Groot <groot@kde.org>
 *   Copyright 2019, Collabora Ltd <arnaud.ferraris@collabora.com>
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

#include "FinishedQmlViewStep.h"

#include "Branding.h"
#include "JobQueue.h"
#include "Settings.h"

#include "utils/Logger.h"
#include "utils/Variant.h"

#include <QVariantMap>
#include <QtDBus/QDBusConnection>
#include <QtDBus/QDBusInterface>
#include <QtDBus/QDBusReply>


FinishedQmlViewStep::FinishedQmlViewStep( QObject* parent )
    : Calamares::QmlViewStep( parent )
    , m_config( new Config(this) )
    , installFailed( false )
    , m_notifyOnFinished( false )
{
    auto jq = Calamares::JobQueue::instance();
    connect( jq, &Calamares::JobQueue::failed, m_config, &Config::onInstallationFailed );
    connect( jq, &Calamares::JobQueue::failed, this, &FinishedQmlViewStep::onInstallationFailed );

    emit nextStatusChanged( true );
}


QString
FinishedQmlViewStep::prettyName() const
{
    return tr( "Finish" );
}

bool
FinishedQmlViewStep::isNextEnabled() const
{
    return false;
}


bool
FinishedQmlViewStep::isBackEnabled() const
{
    return false;
}


bool
FinishedQmlViewStep::isAtBeginning() const
{
    return true;
}


bool
FinishedQmlViewStep::isAtEnd() const
{
    return true;
}

void
FinishedQmlViewStep::sendNotification()
{
    // If the installation failed, don't send notification popup;
    // there's a (modal) dialog popped up with the failure notice.
    if ( installFailed )
    {
        return;
    }

    QDBusInterface notify(
        "org.freedesktop.Notifications", "/org/freedesktop/Notifications", "org.freedesktop.Notifications" );
    if ( notify.isValid() )
    {
        const auto* branding = Calamares::Branding::instance();
        QDBusReply< uint > r = notify.call(
            "Notify",
            QString( "Calamares" ),
            QVariant( 0U ),
            QString( "calamares" ),
            Calamares::Settings::instance()->isSetupMode() ? tr( "Setup Complete" ) : tr( "Installation Complete" ),
            Calamares::Settings::instance()->isSetupMode()
                ? tr( "The setup of %1 is complete." ).arg( branding->versionedName() )
                : tr( "The installation of %1 is complete." ).arg( branding->versionedName() ),
            QStringList(),
            QVariantMap(),
            QVariant( 0 ) );
        if ( !r.isValid() )
        {
            cWarning() << "Could not call org.freedesktop.Notifications.Notify at end of installation." << r.error();
        }
    }
    else
    {
        cWarning() << "Could not get dbus interface for notifications at end of installation." << notify.lastError();
    }
}


void
FinishedQmlViewStep::onActivate()
{
    if ( m_notifyOnFinished )
    {
        sendNotification();
    }
}


Calamares::JobList
FinishedQmlViewStep::jobs() const
{
    return Calamares::JobList();
}

void
FinishedQmlViewStep::onInstallationFailed( const QString& message, const QString& details )
{
    Q_UNUSED( message )
    Q_UNUSED( details )
    installFailed = true;
}

void
FinishedQmlViewStep::setConfigurationMap( const QVariantMap& configurationMap )
{
    Config::RestartMode mode = Config::RestartMode::Never;

    QString restartMode = CalamaresUtils::getString( configurationMap, "restartNowMode" );
    if ( restartMode.isEmpty() )
    {
        if ( configurationMap.contains( "restartNowEnabled" ) )
        {
            cWarning() << "Configuring the finished module with deprecated restartNowEnabled settings";
        }

        bool restartNowEnabled = CalamaresUtils::getBool( configurationMap, "restartNowEnabled", false );
        bool restartNowChecked = CalamaresUtils::getBool( configurationMap, "restartNowChecked", false );

        if ( !restartNowEnabled )
        {
            mode = Config::RestartMode::Never;
        }
        else
        {
            mode = restartNowChecked ? Config::RestartMode::UserChecked : Config::RestartMode::UserUnchecked;
        }
    }
    else
    {
        bool ok = false;
        mode = Config::modeNames().find( restartMode, ok );
        if ( !ok )
        {
            cWarning() << "Configuring the finished module with bad restartNowMode" << restartMode;
        }
    }

    m_config->setRestart( mode );

    if ( mode != Config::Config::RestartMode::Never )
    {
        QString restartNowCommand = CalamaresUtils::getString( configurationMap, "restartNowCommand" );
        if ( restartNowCommand.isEmpty() )
        {
            restartNowCommand = QStringLiteral( "shutdown -r now" );
        }
        m_config->setRestartNowCommand( restartNowCommand );
    }

    m_notifyOnFinished = CalamaresUtils::getBool( configurationMap, "notifyOnFinished", false );
    Calamares::QmlViewStep::setConfigurationMap( configurationMap ); // call parent implementation last
}


CALAMARES_PLUGIN_FACTORY_DEFINITION( FinishedQmlViewStepFactory, registerPlugin< FinishedQmlViewStep >(); )
