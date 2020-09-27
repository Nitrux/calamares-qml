#include "Config.h"
#include "FinishedQmlViewStep.h"

#include "CalamaresVersion.h"
#include "ViewManager.h"
#include "utils/CalamaresUtilsGui.h"
#include "utils/Logger.h"
#include "utils/Retranslator.h"

#include <QApplication>
#include <QProcess>

#include "Branding.h"
#include "Settings.h"


const NamedEnumTable< Config::RestartMode >&
Config::modeNames()
{
    using Mode = Config::RestartMode;

    static const NamedEnumTable< Mode > names { { QStringLiteral( "never" ), Mode::Never },
    { QStringLiteral( "user-unchecked" ), Mode::UserUnchecked },
    { QStringLiteral( "user-checked" ), Mode::UserChecked },
    { QStringLiteral( "always" ), Mode::Always } };

    return names;
}

QString
Config::modeName( Config::RestartMode m )
{
    bool ok = false;
    return modeNames().find( m, ok );  // May be QString()
}

Config::Config(QObject *parent) : QObject(parent)
, m_restartOption(new Opt(this))
{

    CALAMARES_RETRANSLATE(
        const auto* branding = Calamares::Branding::instance();

        if ( Calamares::Settings::instance()->isSetupMode() ) {
            m_message = tr( "<h1>All done.</h1><br/>"
            "%1 has been set up on your computer.<br/>"
            "You may now start using your new system." )
            .arg( branding->versionedName() );

            m_restartOption->setLabel( tr( "When this box is checked, your system will "
            "restart immediately when you click on "
            "Done or close the setup program." )) ;
        } else {
            m_message =  tr( "<h1>All done.</h1><br/>"
            "%1 has been installed on your computer.<br/>"
            "You may now restart into your new system, or continue "
            "using the %2 Live environment." )
            .arg( branding->versionedName(), branding->productName() ) ;

           m_restartOption->setLabel( tr( "When this box is checked, your system will "
            "restart immediately when you click on "
            "Done or close the installer." ) );
        }

        emit messageChanged();)
}



void
Config::setRestart( Config::RestartMode mode )
{

    m_mode = mode;

    m_restartOption->setVisible( mode != RestartMode::Never );
    m_restartOption->setEnabled( mode != RestartMode::Always );
    m_restartOption->setChecked( ( mode == RestartMode::Always ) || ( mode == RestartMode::UserChecked ) );
}


void
Config::setRestartNowCommand( const QString& command )
{
    m_restartNowCommand = command;
}


void
Config::setUpRestart()
{
    cDebug() << "FinishedPage::setUpRestart(), Quit button"
    << "setup=" << modeName( m_mode ) << "command=" << m_restartNowCommand;

    connect( qApp, &QApplication::aboutToQuit, [ this ]() {
        if ( m_restartOption->visible() && m_restartOption->checked() )
        {
            cDebug() << "Running restart command" << m_restartNowCommand;
            QProcess::execute( "/bin/sh", { "-c", m_restartNowCommand } );
        }
    } );
}

void
Config::onInstallationFailed( const QString& message, const QString& details )
{
    const auto* branding = Calamares::Branding::instance();
    Q_UNUSED( details )
    if ( Calamares::Settings::instance()->isSetupMode() )
        m_message = tr( "<h1>Setup Failed</h1><br/>"
        "%1 has not been set up on your computer.<br/>"
        "The error message was: %2." )
        .arg( branding->versionedName() )
        .arg( message ) ;
    else
       m_message = tr( "<h1>Installation Failed</h1><br/>"
        "%1 has not been installed on your computer.<br/>"
        "The error message was: %2." )
        .arg( branding->versionedName() )
        .arg( message ) ;
        setRestart( Config::RestartMode::Never );

    emit messageChanged();
}
