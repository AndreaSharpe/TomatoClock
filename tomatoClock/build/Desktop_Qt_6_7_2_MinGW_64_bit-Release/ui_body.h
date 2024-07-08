/********************************************************************************
** Form generated from reading UI file 'body.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BODY_H
#define UI_BODY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Body
{
public:
    QFrame *frame;
    QPushButton *clockButton;
    QPushButton *homeButton;
    QPushButton *labelButton;
    QPushButton *personButton;
    QFrame *frame_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QPushButton *startEndButton;
    QLabel *label_5;
    QWidget *page_3;
    QLabel *label_9;
    QWidget *page_5;
    QFrame *frame_5;
    QLabel *label_6;
    QLineEdit *uBox_3;
    QPushButton *editedButton_2;
    QLineEdit *eBox_3;
    QPushButton *backButton_3;
    QLabel *regLabel_3;
    QPushButton *uplButton_3;
    QLabel *rpLabel_3;
    QWidget *page_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QPushButton *changemsg;
    QPushButton *changePassword;
    QLabel *label_10;
    QWidget *page_2;
    QLabel *history;
    QLabel *label_8;

    void setupUi(QWidget *Body)
    {
        if (Body->objectName().isEmpty())
            Body->setObjectName("Body");
        Body->resize(751, 451);
        Body->setMinimumSize(QSize(751, 451));
        Body->setMaximumSize(QSize(751, 451));
        frame = new QFrame(Body);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(620, 0, 131, 451));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        clockButton = new QPushButton(frame);
        clockButton->setObjectName("clockButton");
        clockButton->setGeometry(QRect(30, 230, 80, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Imgs/clockB.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clockButton->setIcon(icon);
        clockButton->setIconSize(QSize(64, 64));
        clockButton->setCheckable(false);
        homeButton = new QPushButton(frame);
        homeButton->setObjectName("homeButton");
        homeButton->setGeometry(QRect(30, 40, 80, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Imgs/homeB.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        homeButton->setIcon(icon1);
        homeButton->setIconSize(QSize(64, 64));
        labelButton = new QPushButton(frame);
        labelButton->setObjectName("labelButton");
        labelButton->setGeometry(QRect(30, 130, 80, 71));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Imgs/labelB.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        labelButton->setIcon(icon2);
        labelButton->setIconSize(QSize(64, 64));
        personButton = new QPushButton(frame);
        personButton->setObjectName("personButton");
        personButton->setGeometry(QRect(30, 350, 80, 61));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Imgs/personalB.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        personButton->setIcon(icon3);
        personButton->setIconSize(QSize(64, 64));
        frame_2 = new QFrame(Body);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 621, 451));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        stackedWidget = new QStackedWidget(frame_2);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 621, 451));
        stackedWidget->setStyleSheet(QString::fromUtf8("background: rgb(255, 182, 98);"));
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8("background: rgb(255, 182, 98);"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 130, 71, 61));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 60, 311, 301));
        label_2->setStyleSheet(QString::fromUtf8("border-radius:150px;\n"
"background-color: rgb(255, 145, 71);"));
        startEndButton = new QPushButton(page);
        startEndButton->setObjectName("startEndButton");
        startEndButton->setGeometry(QRect(260, 230, 111, 41));
        startEndButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 20, 111, 71));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page);
        label_2->raise();
        label->raise();
        startEndButton->raise();
        label_5->raise();
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(90, 70, 151, 81));
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        frame_5 = new QFrame(page_5);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 0, 751, 451));
        frame_5->setStyleSheet(QString::fromUtf8("background: rgb(255, 182, 98);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_5);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 30, 301, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Droid Sans")});
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: rgb(221, 60, 20);\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox_3 = new QLineEdit(frame_5);
        uBox_3->setObjectName("uBox_3");
        uBox_3->setGeometry(QRect(90, 170, 221, 41));
        QPalette palette;
        QBrush brush(QColor(254, 254, 254, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(51, 51, 51, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(254, 254, 254, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        uBox_3->setPalette(palette);
        QFont font1;
        font1.setKerning(true);
        uBox_3->setFont(font1);
        uBox_3->setLayoutDirection(Qt::LeftToRight);
        uBox_3->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        uBox_3->setFrame(false);
        uBox_3->setCursorPosition(0);
        editedButton_2 = new QPushButton(frame_5);
        editedButton_2->setObjectName("editedButton_2");
        editedButton_2->setGeometry(QRect(450, 380, 121, 31));
        editedButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        eBox_3 = new QLineEdit(frame_5);
        eBox_3->setObjectName("eBox_3");
        eBox_3->setGeometry(QRect(90, 260, 221, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        eBox_3->setPalette(palette1);
        eBox_3->setFont(font1);
        eBox_3->setLayoutDirection(Qt::LeftToRight);
        eBox_3->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        eBox_3->setInputMethodHints(Qt::ImhNone);
        eBox_3->setFrame(false);
        eBox_3->setCursorPosition(0);
        backButton_3 = new QPushButton(frame_5);
        backButton_3->setObjectName("backButton_3");
        backButton_3->setGeometry(QRect(80, 380, 111, 31));
        backButton_3->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        regLabel_3 = new QLabel(frame_5);
        regLabel_3->setObjectName("regLabel_3");
        regLabel_3->setGeometry(QRect(120, 130, 151, 16));
        regLabel_3->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        uplButton_3 = new QPushButton(frame_5);
        uplButton_3->setObjectName("uplButton_3");
        uplButton_3->setGeometry(QRect(400, 280, 121, 21));
        uplButton_3->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"background: #333;\n"
"color: rgb(214, 214, 214);"));
        rpLabel_3 = new QLabel(frame_5);
        rpLabel_3->setObjectName("rpLabel_3");
        rpLabel_3->setGeometry(QRect(400, 120, 128, 128));
        rpLabel_3->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        stackedWidget->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_3 = new QLabel(page_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 200, 54, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 250, 54, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 60, 121, 91));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        changemsg = new QPushButton(page_4);
        changemsg->setObjectName("changemsg");
        changemsg->setGeometry(QRect(400, 320, 80, 24));
        changemsg->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        changePassword = new QPushButton(page_4);
        changePassword->setObjectName("changePassword");
        changePassword->setGeometry(QRect(400, 280, 80, 24));
        changePassword->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_10 = new QLabel(page_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(310, 40, 141, 41));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        history = new QLabel(page_2);
        history->setObjectName("history");
        history->setGeometry(QRect(0, 0, 621, 451));
        history->setStyleSheet(QString::fromUtf8("color:rgb(0,0,0);\n"
"background-color:rgb(255, 218, 172);"));
        history->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        history->setMargin(20);
        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(60, 230, 141, 71));
        stackedWidget->addWidget(page_2);

        retranslateUi(Body);

        QMetaObject::connectSlotsByName(Body);
    } // setupUi

    void retranslateUi(QWidget *Body)
    {
        Body->setWindowTitle(QCoreApplication::translate("Body", "Form", nullptr));
        clockButton->setText(QString());
        homeButton->setText(QString());
        labelButton->setText(QString());
        personButton->setText(QString());
        label->setText(QCoreApplication::translate("Body", "time", nullptr));
        label_2->setText(QString());
        startEndButton->setText(QCoreApplication::translate("Body", "\345\274\200\345\247\213", nullptr));
        label_5->setText(QCoreApplication::translate("Body", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\346\227\266\351\222\237\347\225\214\351\235\242</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Body", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\344\273\273\345\212\241\347\256\241\347\220\206\347\225\214\351\235\242</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Body", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:700;\">\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257</span></p></body></html>", nullptr));
        uBox_3->setText(QString());
        uBox_3->setPlaceholderText(QCoreApplication::translate("Body", "\347\224\250\346\210\267\345\220\215", nullptr));
        editedButton_2->setText(QCoreApplication::translate("Body", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        eBox_3->setInputMask(QString());
        eBox_3->setText(QString());
        eBox_3->setPlaceholderText(QCoreApplication::translate("Body", "\351\202\256\347\256\261", nullptr));
        backButton_3->setText(QCoreApplication::translate("Body", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
        regLabel_3->setText(QCoreApplication::translate("Body", "\345\234\250\344\270\213\346\226\271\344\277\256\346\224\271\346\202\250\347\232\204\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        uplButton_3->setText(QCoreApplication::translate("Body", "\346\233\264\346\224\271\345\244\264\345\203\217", nullptr));
        rpLabel_3->setText(QCoreApplication::translate("Body", "<img src=\":user.png\" />", nullptr));
        label_3->setText(QCoreApplication::translate("Body", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Body", "\351\202\256\347\256\261\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Body", "\345\244\264\345\203\217", nullptr));
        changemsg->setText(QCoreApplication::translate("Body", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        changePassword->setText(QCoreApplication::translate("Body", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_10->setText(QCoreApplication::translate("Body", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\344\270\252\344\272\272\344\270\255\345\277\203\347\225\214\351\235\242</span></p></body></html>", nullptr));
        history->setText(QCoreApplication::translate("Body", "<html><head/><body><p><span style=\" font-size:11pt;\">TextLabel</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Body", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\345\216\206\345\217\262\350\256\260\345\275\225\347\225\214\351\235\242</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Body: public Ui_Body {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BODY_H
