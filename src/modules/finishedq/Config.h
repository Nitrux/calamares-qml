/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
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

#ifndef FINISHED_CONFIG_H
#define FINISHED_CONFIG_H

#include <QObject>
#include <QString>
#include "utils/NamedEnum.h"

class Opt : public QObject // to wrap any optional choice
{
    Q_OBJECT
    Q_PROPERTY(bool visible READ visible NOTIFY visibleChanged FINAL)
    Q_PROPERTY(bool enabled READ enabled NOTIFY enabledChanged FINAL)
    Q_PROPERTY(bool checked READ checked WRITE setChecked NOTIFY checkedChanged FINAL)
    Q_PROPERTY(bool exclusive READ exclusive NOTIFY exclusiveChanged FINAL)
    Q_PROPERTY(QString label READ label NOTIFY labelChanged FINAL)
    Q_PROPERTY(QString tooltip READ tooltip NOTIFY tooltipChanged FINAL)
    Q_PROPERTY(QString message READ message NOTIFY messageChanged FINAL)
    Q_PROPERTY(QString icon READ icon NOTIFY iconChanged FINAL)

public:
    explicit Opt(QObject * parent = nullptr ) : QObject(parent) {}

    void setVisible(const bool &value)
    {
        if(m_visible == value)
            return;

        m_visible = value;
        emit visibleChanged();
    }

    bool visible() const
    {
        return m_visible;
    }

    void setEnabled(const bool &value)
    {
        if(m_enabled == value)
            return;

        m_enabled = value;
        emit enabledChanged();
    }

    bool enabled() const
    {
        return m_enabled;
    }

    void setExclusive(const bool &value)
    {
        if(m_exclusive == value)
            return;

        m_exclusive = value;
        emit exclusiveChanged();
    }

    bool exclusive() const
    {
        return m_exclusive;
    }


    void setChecked(const bool &value)
    {
        if(m_checked == value)
            return;

        m_checked = value;
        emit checkedChanged();
    }

    bool checked() const
    {
        return m_checked;
    }

    void setLabel(const QString &value)
    {
        if(m_label == value)
            return;

        m_label = value;
        emit labelChanged();
    }

    QString label() const
    {
        return m_label;
    }

    void setMessage(const QString &value)
    {
        if(m_message == value)
            return;

        m_message = value;
        emit messageChanged();
    }

    QString message() const
    {
        return m_message;
    }

    void setTooltip(const QString &value)
    {
        if(m_tooltip == value)
            return;

        m_tooltip = value;
        emit tooltipChanged();
    }

    QString tooltip() const
    {
        return m_tooltip;
    }

    void setIcon(const QString &value)
    {
        if(m_icon == value)
            return;

        m_icon = value;
        emit iconChanged();
    }

    QString icon() const
    {
        return m_icon;
    }

    void hide()
    {
        this->setVisible(false);
    }

    void show()
    {
        this->setVisible(true);
    }

protected:
    QString m_label ="Title";
    QString m_message = "description text";
    QString m_tooltip;
    QString m_icon;
    bool m_enabled = true;
    bool m_visible = true;
    bool m_checked = false;
    bool m_exclusive = false;

signals:
    void visibleChanged();
    void enabledChanged();
    void checkedChanged();
    void labelChanged();
    void tooltipChanged();
    void messageChanged();
    void iconChanged();
    void exclusiveChanged();
};

class Config : public QObject
{
    Q_OBJECT

    Q_PROPERTY(Opt *restartOption READ restartOption NOTIFY restartOptionChanged)
    Q_PROPERTY(QString message READ message NOTIFY messageChanged)

public:

    enum class RestartMode
    {
        Never = 0,  ///< @brief Don't show button, just exit
        UserUnchecked,  ///< @brief Show button, starts unchecked
        UserChecked,  ///< @brief Show button, starts checked
        Always  ///< @brief Show button, can't change, checked
    };
    static const NamedEnumTable< RestartMode >& modeNames();
    /// @brief Returns the config-name of the given restart-mode @p m
    static QString modeName( RestartMode m );

    explicit Config( QObject* parent = nullptr );

    void setRestart( Config::RestartMode mode );
    void setRestartNowCommand( const QString& command );

    void setUpRestart();

    Opt * restartOption() const { return m_restartOption; }
    QString message() const { return m_message; }

public slots:
    void onInstallationFailed( const QString& message, const QString& details );

private:
    Config::RestartMode m_mode;
    QString m_restartNowCommand;

    Opt *m_restartOption;
    QString m_message;

signals:
    void messageChanged();
    void restartOptionChanged();
};

#endif
