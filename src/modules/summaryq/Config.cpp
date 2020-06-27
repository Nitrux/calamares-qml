#include "Config.h"
#include "SummaryQmlViewStep.h"

#include "Branding.h"
#include "Settings.h"
#include "ViewManager.h"

#include "utils/CalamaresUtilsGui.h"
#include "utils/Logger.h"
#include "utils/Retranslator.h"
#include "viewpages/ExecutionViewStep.h"


SummaryModel::SummaryModel(QObject* parent) : QAbstractListModel(parent)
{}

QHash<int, QByteArray> SummaryModel::roleNames() const
{
    return { { Qt::DisplayRole, "title" }, { Qt::UserRole, "message" } };
}

QVariant SummaryModel::data(const QModelIndex& index, int role) const
{
    if ( !index.isValid() )
    {
        return QVariant();
    }
    const auto item = m_summary.at( index.row() );
    return role == Qt::DisplayRole ? item->title : item->message;
}

int SummaryModel::rowCount(const QModelIndex&) const
{
    return m_summary.count();
}

void SummaryModel::setSummary(const Calamares::ViewStepList& steps)
{
    m_summary.clear();
    emit beginResetModel();

    for ( Calamares::ViewStep* step : steps )
    {
        QString text = step->prettyStatus();
        QWidget* widget = step->createSummaryWidget();

        if ( text.isEmpty() && !widget )
            continue;

        m_summary << new StepSummary {step->prettyName(), text};

        //         if ( widget )
        //             itemBodyCoreLayout->addWidget( widget ); //TODO decide what to do with steps that have more summery details
    }
    emit endResetModel();
}

Config::Config(QObject *parent) : QObject(parent)
, m_thisViewStep(static_cast<SummaryQmlViewStep*>(parent))
, m_summary( new SummaryModel(this) )
{
    m_title = m_thisViewStep->prettyName();

    if ( Calamares::Settings::instance()->isSetupMode() )
        m_message =( tr( "This is an overview of what will happen once you start "
        "the setup procedure." ) );
    else
        m_message = ( tr( "This is an overview of what will happen once you start "
        "the install procedure." ) );
}

void Config::componentComplete()
{
    refresh();
}

void Config::refresh()
{
    m_summary->setSummary( stepsForSummary( Calamares::ViewManager::instance()->viewSteps() ));
}

void Config::init()
{
    refresh();
}

Calamares::ViewStepList Config::stepsForSummary( const Calamares::ViewStepList& allSteps ) const
{
    Calamares::ViewStepList steps;
    for ( Calamares::ViewStep* step : allSteps )
    {
        // We start from the beginning of the complete steps list. If we encounter any
        // ExecutionViewStep, it means there was an execution phase in the past, and any
        // jobs from before that phase were already executed, so we can safely clear the
        // list of steps to summarize and start collecting from scratch.
        if ( qobject_cast< Calamares::ExecutionViewStep* >( step ) )
        {
            steps.clear();
            continue;
        }

        // If we reach the parent step of this page, we're done collecting the list of
        // steps to summarize.
        if ( m_thisViewStep == step )
            break;

        steps.append( step );
    }

    return steps;
}


