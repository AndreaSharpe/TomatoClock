/********************************************************************************
** Form generated from reading UI file 'reset.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESET_H
#define UI_RESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reset
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *reset)
    {
        if (reset->objectName().isEmpty())
            reset->setObjectName("reset");
        reset->resize(432, 360);
        pushButton_2 = new QPushButton(reset);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 290, 80, 21));
        pushButton = new QPushButton(reset);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 110, 80, 21));
        lineEdit_4 = new QLineEdit(reset);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(70, 70, 299, 23));
        lineEdit_5 = new QLineEdit(reset);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(70, 161, 299, 23));
        lineEdit_6 = new QLineEdit(reset);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(70, 252, 299, 23));
        label_5 = new QLabel(reset);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 70, 60, 86));
        label_6 = new QLabel(reset);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 162, 60, 85));
        label_7 = new QLabel(reset);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 253, 60, 86));

        retranslateUi(reset);

        QMetaObject::connectSlotsByName(reset);
    } // setupUi

    void retranslateUi(QWidget *reset)
    {
        reset->setWindowTitle(QCoreApplication::translate("reset", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("reset", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("reset", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("reset", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", nullptr));
        label_6->setText(QCoreApplication::translate("reset", "\351\252\214\350\257\201\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("reset", "\346\226\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reset: public Ui_reset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESET_H
