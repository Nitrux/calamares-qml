/********************************************************************************
** Form generated from reading UI file 'EncryptWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTWIDGET_H
#define UI_ENCRYPTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EncryptWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_encryptCheckBox;
    QLineEdit *m_passphraseLineEdit;
    QLineEdit *m_confirmLineEdit;
    QLabel *m_iconLabel;

    void setupUi(QWidget *EncryptWidget)
    {
        if (EncryptWidget->objectName().isEmpty())
            EncryptWidget->setObjectName(QString::fromUtf8("EncryptWidget"));
        EncryptWidget->resize(822, 59);
        horizontalLayout = new QHBoxLayout(EncryptWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_encryptCheckBox = new QCheckBox(EncryptWidget);
        m_encryptCheckBox->setObjectName(QString::fromUtf8("m_encryptCheckBox"));

        horizontalLayout->addWidget(m_encryptCheckBox);

        m_passphraseLineEdit = new QLineEdit(EncryptWidget);
        m_passphraseLineEdit->setObjectName(QString::fromUtf8("m_passphraseLineEdit"));
        m_passphraseLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(m_passphraseLineEdit);

        m_confirmLineEdit = new QLineEdit(EncryptWidget);
        m_confirmLineEdit->setObjectName(QString::fromUtf8("m_confirmLineEdit"));
        m_confirmLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(m_confirmLineEdit);

        m_iconLabel = new QLabel(EncryptWidget);
        m_iconLabel->setObjectName(QString::fromUtf8("m_iconLabel"));
        m_iconLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(m_iconLabel);


        retranslateUi(EncryptWidget);

        QMetaObject::connectSlotsByName(EncryptWidget);
    } // setupUi

    void retranslateUi(QWidget *EncryptWidget)
    {
        EncryptWidget->setWindowTitle(QCoreApplication::translate("EncryptWidget", "Form", nullptr));
        m_encryptCheckBox->setText(QCoreApplication::translate("EncryptWidget", "En&crypt system", nullptr));
        m_passphraseLineEdit->setPlaceholderText(QCoreApplication::translate("EncryptWidget", "Passphrase", nullptr));
        m_confirmLineEdit->setPlaceholderText(QCoreApplication::translate("EncryptWidget", "Confirm passphrase", nullptr));
        m_iconLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EncryptWidget: public Ui_EncryptWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTWIDGET_H
