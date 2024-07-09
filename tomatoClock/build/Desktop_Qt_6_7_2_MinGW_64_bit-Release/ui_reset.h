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
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *reset)
    {
        if (reset->objectName().isEmpty())
            reset->setObjectName("reset");
        reset->resize(511, 314);
        reset->setMinimumSize(QSize(511, 314));
        reset->setSizeIncrement(QSize(511, 314));
        reset->setBaseSize(QSize(511, 314));
        reset->setStyleSheet(QString::fromUtf8(""));
        pushButton_3 = new QPushButton(reset);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 270, 80, 21));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"    font: 10px \"Microsoft YaHei UI\", sans-serif; /* \345\255\227\344\275\223\345\244\247\345\260\217\350\256\276\347\275\256\344\270\27210px */  \n"
"    color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\347\231\275\350\211\262 */  \n"
"    background-color: #5cb85c; /* \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\346\257\224#45a049\346\265\205\347\232\204\347\273\277\350\211\262 */  \n"
"    /* \345\205\266\344\273\226\346\240\267\345\274\217\345\261\236\346\200\247 */  "));
        pushButton_4 = new QPushButton(reset);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(330, 270, 80, 21));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"    font: 10px \"Microsoft YaHei UI\", sans-serif; /* \345\255\227\344\275\223\345\244\247\345\260\217\350\256\276\347\275\256\344\270\27210px */  \n"
"    color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\347\231\275\350\211\262 */  \n"
"    background-color: #5cb85c; /* \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\346\257\224#45a049\346\265\205\347\232\204\347\273\277\350\211\262 */  \n"
"    /* \345\205\266\344\273\226\346\240\267\345\274\217\345\261\236\346\200\247 */  "));
        pushButton_5 = new QPushButton(reset);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(380, 90, 80, 21));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"    font: 10px \"Microsoft YaHei UI\", sans-serif; /* \345\255\227\344\275\223\345\244\247\345\260\217\350\256\276\347\275\256\344\270\27210px */  \n"
"    color: white; /* \346\226\207\345\255\227\351\242\234\350\211\262\350\256\276\347\275\256\344\270\272\347\231\275\350\211\262 */  \n"
"    background-color: #5cb85c; /* \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\346\257\224#45a049\346\265\205\347\232\204\347\273\277\350\211\262 */  \n"
"    /* \345\205\266\344\273\226\346\240\267\345\274\217\345\261\236\346\200\247 */  \n"
""));
        lineEdit_3 = new QLineEdit(reset);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(150, 130, 319, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white; /* \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */  \n"
"    border: 2px solid white; /* \350\256\276\347\275\256\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262\357\274\214\345\256\275\345\272\246\344\270\2722px */  \n"
"    border-radius: 0px; /* \350\256\276\347\275\256\350\276\271\346\241\206\345\234\206\350\247\222\344\270\2720\357\274\214\345\215\263\346\226\271\345\275\242\350\276\271\346\241\206 */  \n"
"    padding: 5px; /* \346\267\273\345\212\240\345\206\205\350\276\271\350\267\235 */  \n"
"	\n"
"	color: rgb(0, 0, 0);"));
        lineEdit_2 = new QLineEdit(reset);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(150, 200, 319, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("\n"
"    background-color: white; /* \350\256\276\347\275\256\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */  \n"
"    border: 2px solid white; /* \350\256\276\347\275\256\350\276\271\346\241\206\344\270\272\347\231\275\350\211\262\357\274\214\345\256\275\345\272\246\344\270\2722px */  \n"
"    border-radius: 0px; /* \350\256\276\347\275\256\350\276\271\346\241\206\345\234\206\350\247\222\344\270\2720\357\274\214\345\215\263\346\226\271\345\275\242\350\276\271\346\241\206 */  \n"
"    padding: 5px; /* \346\267\273\345\212\240\345\206\205\350\276\271\350\267\235 */  \n"
"	color: rgb(0, 0, 0);"));
        lineEdit = new QLineEdit(reset);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 40, 319, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: white; \n"
"    border: 2px solid white; \n"
"    border-radius: 0px; \n"
"    padding: 5px; \n"
"	color: rgb(0, 0, 0);"));
        label = new QLabel(reset);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 65, 79));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 10pt \"\351\273\221\344\275\223\";"));
        label_2 = new QLabel(reset);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 110, 65, 79));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";\n"
""));
        label_3 = new QLabel(reset);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 180, 65, 79));
        label_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\351\273\221\344\275\223\";"));

        retranslateUi(reset);

        QMetaObject::connectSlotsByName(reset);
    } // setupUi

    void retranslateUi(QWidget *reset)
    {
        reset->setWindowTitle(QCoreApplication::translate("reset", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("reset", "\350\277\224\345\233\236", nullptr));
        pushButton_4->setText(QCoreApplication::translate("reset", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", nullptr));
        pushButton_5->setText(QCoreApplication::translate("reset", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("reset", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", nullptr));
        label_2->setText(QCoreApplication::translate("reset", "\351\252\214\350\257\201\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("reset", "\346\226\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reset: public Ui_reset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESET_H
