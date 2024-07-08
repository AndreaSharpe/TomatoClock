/********************************************************************************
** Form generated from reading UI file 'changepassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORDDIALOG_H
#define UI_CHANGEPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswordDialog
{
public:
    QLineEdit *oldPasswordEdit;
    QLineEdit *confirmPasswordEdit;
    QPushButton *submitNewPasswordButton;
    QLabel *newPasswordLabel;
    QLineEdit *newPasswordEdit;
    QLabel *oldPasswordLabel;
    QLabel *confirmPasswordLabel;

    void setupUi(QWidget *ChangePasswordDialog)
    {
        if (ChangePasswordDialog->objectName().isEmpty())
            ChangePasswordDialog->setObjectName("ChangePasswordDialog");
        ChangePasswordDialog->resize(675, 402);
        oldPasswordEdit = new QLineEdit(ChangePasswordDialog);
        oldPasswordEdit->setObjectName("oldPasswordEdit");
        oldPasswordEdit->setGeometry(QRect(170, 60, 431, 31));
        oldPasswordEdit->setEchoMode(QLineEdit::Password);
        confirmPasswordEdit = new QLineEdit(ChangePasswordDialog);
        confirmPasswordEdit->setObjectName("confirmPasswordEdit");
        confirmPasswordEdit->setGeometry(QRect(170, 150, 431, 31));
        confirmPasswordEdit->setEchoMode(QLineEdit::Password);
        submitNewPasswordButton = new QPushButton(ChangePasswordDialog);
        submitNewPasswordButton->setObjectName("submitNewPasswordButton");
        submitNewPasswordButton->setGeometry(QRect(290, 310, 111, 31));
        newPasswordLabel = new QLabel(ChangePasswordDialog);
        newPasswordLabel->setObjectName("newPasswordLabel");
        newPasswordLabel->setGeometry(QRect(40, 160, 111, 19));
        newPasswordEdit = new QLineEdit(ChangePasswordDialog);
        newPasswordEdit->setObjectName("newPasswordEdit");
        newPasswordEdit->setGeometry(QRect(170, 230, 431, 31));
        newPasswordEdit->setEchoMode(QLineEdit::Password);
        oldPasswordLabel = new QLabel(ChangePasswordDialog);
        oldPasswordLabel->setObjectName("oldPasswordLabel");
        oldPasswordLabel->setGeometry(QRect(40, 60, 111, 31));
        confirmPasswordLabel = new QLabel(ChangePasswordDialog);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setGeometry(QRect(40, 240, 101, 20));

        retranslateUi(ChangePasswordDialog);

        QMetaObject::connectSlotsByName(ChangePasswordDialog);
    } // setupUi

    void retranslateUi(QWidget *ChangePasswordDialog)
    {
        ChangePasswordDialog->setWindowTitle(QCoreApplication::translate("ChangePasswordDialog", "Form", nullptr));
        submitNewPasswordButton->setText(QCoreApplication::translate("ChangePasswordDialog", "\346\217\220\344\272\244", nullptr));
        newPasswordLabel->setText(QCoreApplication::translate("ChangePasswordDialog", "\346\226\260\345\257\206\347\240\201", nullptr));
        oldPasswordLabel->setText(QCoreApplication::translate("ChangePasswordDialog", "\346\227\247\345\257\206\347\240\201", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("ChangePasswordDialog", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDialog: public Ui_ChangePasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDIALOG_H
