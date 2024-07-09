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
    QPushButton *submitNewPasswordButton;
    QLabel *newPasswordLabel;
    QLabel *confirmPasswordLabel;
    QLabel *oldPasswordLabel;
    QPushButton *returnButton;
    QLineEdit *oldPasswordEdit;
    QLineEdit *newPasswordEdit;
    QLineEdit *confirmPasswordEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *ChangePasswordDialog)
    {
        if (ChangePasswordDialog->objectName().isEmpty())
            ChangePasswordDialog->setObjectName("ChangePasswordDialog");
        ChangePasswordDialog->resize(511, 314);
        submitNewPasswordButton = new QPushButton(ChangePasswordDialog);
        submitNewPasswordButton->setObjectName("submitNewPasswordButton");
        submitNewPasswordButton->setGeometry(QRect(320, 260, 91, 31));
        submitNewPasswordButton->setStyleSheet(QString::fromUtf8("QPushButton { font: 10px \"Microsoft YaHei UI\", sans-serif; /* \345\255\227\344\275\223\345\244\247\345\260\217\350\256\276\347\275\256\344\270\27210px */ color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\347\231\275\350\211\262 */ background-color: #5cb85c; /* \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\346\257\224#45a049\346\265\205\347\232\204\347\273\277\350\211\262 */ /* \345\205\266\344\273\226\346\240\267\345\274\217\345\261\236\346\200\247 */ } QPushButton:hover { background-color: #45a049; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\344\270\272#45a049 */ /* \346\202\254\345\201\234\346\227\266\350\213\245\351\234\200\344\277\235\346\214\201\345\205\266\344\273\226\346\240\267\345\274\217\344\270\215\345\217\230\357\274\214\345\210\231\346\227\240\351\234\200\351\242\235\345\244\226\350\256\276\347\275\256 */ }\n"
"font: 10pt \"Microsoft YaHei UI\";\n"
""));
        newPasswordLabel = new QLabel(ChangePasswordDialog);
        newPasswordLabel->setObjectName("newPasswordLabel");
        newPasswordLabel->setGeometry(QRect(70, 100, 51, 19));
        newPasswordLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));
        confirmPasswordLabel = new QLabel(ChangePasswordDialog);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setGeometry(QRect(50, 180, 121, 21));
        confirmPasswordLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));
        oldPasswordLabel = new QLabel(ChangePasswordDialog);
        oldPasswordLabel->setObjectName("oldPasswordLabel");
        oldPasswordLabel->setGeometry(QRect(70, 30, 51, 31));
        oldPasswordLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));
        returnButton = new QPushButton(ChangePasswordDialog);
        returnButton->setObjectName("returnButton");
        returnButton->setGeometry(QRect(90, 260, 91, 31));
        returnButton->setStyleSheet(QString::fromUtf8("QPushButton { font: 10px \"Microsoft YaHei UI\", sans-serif; /* \345\255\227\344\275\223\345\244\247\345\260\217\350\256\276\347\275\256\344\270\27210px */ color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\347\231\275\350\211\262 */ background-color: #5cb85c; /* \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\346\257\224#45a049\346\265\205\347\232\204\347\273\277\350\211\262 */ /* \345\205\266\344\273\226\346\240\267\345\274\217\345\261\236\346\200\247 */ } QPushButton:hover { background-color: #45a049; /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\344\270\272#45a049 */ /* \346\202\254\345\201\234\346\227\266\350\213\245\351\234\200\344\277\235\346\214\201\345\205\266\344\273\226\346\240\267\345\274\217\344\270\215\345\217\230\357\274\214\345\210\231\346\227\240\351\234\200\351\242\235\345\244\226\350\256\276\347\275\256 */ }"));
        oldPasswordEdit = new QLineEdit(ChangePasswordDialog);
        oldPasswordEdit->setObjectName("oldPasswordEdit");
        oldPasswordEdit->setGeometry(QRect(190, 30, 261, 31));
        oldPasswordEdit->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #FFFFFF;\n"
"color: rgb(0, 0, 0);\n"
""));
        oldPasswordEdit->setEchoMode(QLineEdit::Password);
        newPasswordEdit = new QLineEdit(ChangePasswordDialog);
        newPasswordEdit->setObjectName("newPasswordEdit");
        newPasswordEdit->setGeometry(QRect(190, 100, 261, 31));
        newPasswordEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: rgb(0, 0, 0);\n"
"    background-color: #FFFFFF;\n"
"}"));
        newPasswordEdit->setEchoMode(QLineEdit::Password);
        confirmPasswordEdit = new QLineEdit(ChangePasswordDialog);
        confirmPasswordEdit->setObjectName("confirmPasswordEdit");
        confirmPasswordEdit->setGeometry(QRect(190, 170, 261, 31));
        confirmPasswordEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: rgb(0, 0, 0);\n"
"    background-color: #FFFFFF;\n"
"}"));
        confirmPasswordEdit->setEchoMode(QLineEdit::Password);
        label = new QLabel(ChangePasswordDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 210, 171, 16));
        label_2 = new QLabel(ChangePasswordDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 70, 251, 16));

        retranslateUi(ChangePasswordDialog);

        QMetaObject::connectSlotsByName(ChangePasswordDialog);
    } // setupUi

    void retranslateUi(QWidget *ChangePasswordDialog)
    {
        ChangePasswordDialog->setWindowTitle(QCoreApplication::translate("ChangePasswordDialog", "Form", nullptr));
        submitNewPasswordButton->setText(QCoreApplication::translate("ChangePasswordDialog", "\347\241\256\350\256\244", nullptr));
        newPasswordLabel->setText(QCoreApplication::translate("ChangePasswordDialog", "\346\226\260\345\257\206\347\240\201", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("ChangePasswordDialog", "\345\206\215\346\254\241\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        oldPasswordLabel->setText(QCoreApplication::translate("ChangePasswordDialog", "\346\227\247\345\257\206\347\240\201", nullptr));
        returnButton->setText(QCoreApplication::translate("ChangePasswordDialog", "\350\277\224\345\233\236", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangePasswordDialog: public Ui_ChangePasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORDDIALOG_H
