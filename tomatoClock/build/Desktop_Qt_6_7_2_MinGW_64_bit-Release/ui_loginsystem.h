/********************************************************************************
** Form generated from reading UI file 'loginsystem.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSYSTEM_H
#define UI_LOGINSYSTEM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginSystem
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QStackedWidget *winStack;
    QWidget *Login;
    QFrame *frame_2;
    QLabel *label;
    QLineEdit *usernameBox;
    QLineEdit *passwordBox;
    QPushButton *loginButton;
    QPushButton *regButton;
    QLabel *loginLabel;
    QLabel *label_7;
    QPushButton *reset;
    QWidget *page_2;
    QFrame *frame_3;
    QLabel *label_2;
    QLineEdit *uBox;
    QLineEdit *pBox;
    QPushButton *completeRegButton;
    QLineEdit *eBox;
    QPushButton *backButton;
    QLabel *regLabel;
    QLabel *rpLabel;
    QPushButton *uplButton;
    QWidget *page;
    QFrame *frame_4;
    QLabel *loggedUserHeader;
    QPushButton *logoutButton;
    QLabel *label_3;
    QLabel *nameLabel;
    QPushButton *editButton;
    QPushButton *delButton;
    QLabel *label_6;
    QLabel *emailLabel;
    QFrame *frame_6;
    QLabel *loggedPic;
    QWidget *page_3;
    QFrame *frame_5;
    QLabel *label_5;
    QLineEdit *uBox_2;
    QLineEdit *pBox_2;
    QPushButton *editedButton;
    QLineEdit *eBox_2;
    QPushButton *backButton_2;
    QLabel *regLabel_2;
    QPushButton *uplButton_2;
    QLabel *rpLabel_2;
    QWidget *page_4;

    void setupUi(QMainWindow *LoginSystem)
    {
        if (LoginSystem->objectName().isEmpty())
            LoginSystem->setObjectName("LoginSystem");
        LoginSystem->resize(750, 450);
        LoginSystem->setMaximumSize(QSize(750, 450));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        LoginSystem->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LoginSystem->setWindowIcon(icon);
        centralWidget = new QWidget(LoginSystem);
        centralWidget->setObjectName("centralWidget");
        frame = new QFrame(centralWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 750, 450));
        frame->setMinimumSize(QSize(750, 450));
        frame->setMaximumSize(QSize(750, 450));
        frame->setBaseSize(QSize(750, 450));
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        winStack = new QStackedWidget(frame);
        winStack->setObjectName("winStack");
        winStack->setGeometry(QRect(0, 0, 751, 451));
        Login = new QWidget();
        Login->setObjectName("Login");
        frame_2 = new QFrame(Login);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 751, 451));
        frame_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 182, 98);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 60, 175, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Droid Sans")});
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"font: 11pt;\n"
"color: rgb(221, 60, 20);\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        usernameBox = new QLineEdit(frame_2);
        usernameBox->setObjectName("usernameBox");
        usernameBox->setGeometry(QRect(250, 140, 251, 41));
        QPalette palette1;
        QBrush brush3(QColor(254, 254, 254, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(51, 51, 51, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(254, 254, 254, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        usernameBox->setPalette(palette1);
        QFont font1;
        font1.setKerning(true);
        usernameBox->setFont(font1);
        usernameBox->setLayoutDirection(Qt::LeftToRight);
        usernameBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(185, 185, 185);"));
        usernameBox->setFrame(false);
        usernameBox->setCursorPosition(0);
        passwordBox = new QLineEdit(frame_2);
        passwordBox->setObjectName("passwordBox");
        passwordBox->setGeometry(QRect(250, 230, 251, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        passwordBox->setPalette(palette2);
        passwordBox->setFont(font1);
        passwordBox->setLayoutDirection(Qt::LeftToRight);
        passwordBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(185, 185, 185);"));
        passwordBox->setInputMethodHints(Qt::ImhNone);
        passwordBox->setFrame(false);
        passwordBox->setCursorPosition(0);
        loginButton = new QPushButton(frame_2);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(330, 330, 101, 31));
        loginButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: rgb(221, 60, 20);\n"
"Color: #fefefe;"));
        regButton = new QPushButton(frame_2);
        regButton->setObjectName("regButton");
        regButton->setGeometry(QRect(480, 341, 61, 20));
        regButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: rgb(255, 145, 20);\n"
"Color: #fefefe;"));
        loginLabel = new QLabel(frame_2);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setGeometry(QRect(230, 100, 267, 16));
        loginLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(88, 80, 128, 128));
        label_7->setStyleSheet(QString::fromUtf8("border-radius: 64px;\n"
"background-image: url(:/user.png);"));
        reset = new QPushButton(frame_2);
        reset->setObjectName("reset");
        reset->setGeometry(QRect(420, 280, 71, 21));
        reset->setStyleSheet(QString::fromUtf8("color:black;\n"
"background: rgb(255, 182, 98);"));
        winStack->addWidget(Login);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 0, 751, 451));
        QFont font2;
        font2.setBold(false);
        frame_3->setFont(font2);
        frame_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 182, 98);\n"
"height:751px;\n"
"width:451px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(258, 24, 221, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"font: 12pt \"\346\245\267\344\275\223\";\n"
"color: rgb(221, 60, 20);\n"
"margin: 0 auto;\n"
"font-size:90px;\n"
"font-family: 'Droid Sans';"));
        uBox = new QLineEdit(frame_3);
        uBox->setObjectName("uBox");
        uBox->setGeometry(QRect(460, 150, 221, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        uBox->setPalette(palette3);
        uBox->setFont(font1);
        uBox->setLayoutDirection(Qt::LeftToRight);
        uBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        uBox->setFrame(false);
        uBox->setCursorPosition(0);
        pBox = new QLineEdit(frame_3);
        pBox->setObjectName("pBox");
        pBox->setGeometry(QRect(460, 220, 221, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pBox->setPalette(palette4);
        pBox->setFont(font1);
        pBox->setLayoutDirection(Qt::LeftToRight);
        pBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        pBox->setInputMethodHints(Qt::ImhNone);
        pBox->setFrame(false);
        pBox->setCursorPosition(0);
        completeRegButton = new QPushButton(frame_3);
        completeRegButton->setObjectName("completeRegButton");
        completeRegButton->setGeometry(QRect(480, 360, 171, 31));
        completeRegButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 15px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        eBox = new QLineEdit(frame_3);
        eBox->setObjectName("eBox");
        eBox->setGeometry(QRect(460, 290, 221, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        eBox->setPalette(palette5);
        eBox->setFont(font1);
        eBox->setLayoutDirection(Qt::LeftToRight);
        eBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        eBox->setInputMethodHints(Qt::ImhNone);
        eBox->setFrame(false);
        eBox->setCursorPosition(0);
        backButton = new QPushButton(frame_3);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(50, 390, 61, 21));
        backButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        backButton->setIconSize(QSize(16, 16));
        regLabel = new QLabel(frame_3);
        regLabel->setObjectName("regLabel");
        regLabel->setGeometry(QRect(520, 110, 91, 20));
        regLabel->setStyleSheet(QString::fromUtf8("color: rgb(221, 60, 20);"));
        rpLabel = new QLabel(frame_3);
        rpLabel->setObjectName("rpLabel");
        rpLabel->setGeometry(QRect(120, 90, 151, 161));
        rpLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        rpLabel->setPixmap(QPixmap(QString::fromUtf8(":/Imgs/023-10-27 161236.png")));
        uplButton = new QPushButton(frame_3);
        uplButton->setObjectName("uplButton");
        uplButton->setGeometry(QRect(110, 280, 171, 21));
        uplButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"background-color: rgb(0, 36, 38);\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        winStack->addWidget(page_2);
        page = new QWidget();
        page->setObjectName("page");
        frame_4 = new QFrame(page);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 751, 451));
        frame_4->setStyleSheet(QString::fromUtf8("background: rgb(255, 182, 98);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        loggedUserHeader = new QLabel(frame_4);
        loggedUserHeader->setObjectName("loggedUserHeader");
        loggedUserHeader->setGeometry(QRect(40, 30, 245, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Droid Sans")});
        loggedUserHeader->setFont(font3);
        loggedUserHeader->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: rgb(221, 60, 20);\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        logoutButton = new QPushButton(frame_4);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(250, 390, 151, 21));
        logoutButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 270, 47, 13));
        label_3->setStyleSheet(QString::fromUtf8("color: #c33;\n"
"font-weight: bold;"));
        nameLabel = new QLabel(frame_4);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(130, 270, 241, 16));
        nameLabel->setStyleSheet(QString::fromUtf8("color: #fefefe;\n"
"background-color: rgb(170, 85, 127);"));
        editButton = new QPushButton(frame_4);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(50, 390, 151, 21));
        editButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: rgb(255, 178, 24);\n"
"Color: #fefefe;"));
        delButton = new QPushButton(frame_4);
        delButton->setObjectName("delButton");
        delButton->setGeometry(QRect(450, 390, 151, 21));
        delButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: rgb(255, 178, 24);\n"
"Color: rgb(255, 255, 255)"));
        label_6 = new QLabel(frame_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 330, 47, 13));
        label_6->setStyleSheet(QString::fromUtf8("color: #c33;\n"
"font-weight: bold;"));
        emailLabel = new QLabel(frame_4);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(130, 330, 241, 16));
        emailLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(162, 49, 255);"));
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(90, 100, 128, 128));
        frame_6->setStyleSheet(QString::fromUtf8(""));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        loggedPic = new QLabel(frame_6);
        loggedPic->setObjectName("loggedPic");
        loggedPic->setGeometry(QRect(0, 0, 128, 128));
        loggedPic->setStyleSheet(QString::fromUtf8(""));
        frame_6->raise();
        loggedUserHeader->raise();
        logoutButton->raise();
        label_3->raise();
        nameLabel->raise();
        editButton->raise();
        delButton->raise();
        label_6->raise();
        emailLabel->raise();
        winStack->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 0, 751, 451));
        frame_5->setStyleSheet(QString::fromUtf8("background: rgb(255, 182, 98);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 40, 301, 41));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: rgb(221, 60, 20);\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox_2 = new QLineEdit(frame_5);
        uBox_2->setObjectName("uBox_2");
        uBox_2->setGeometry(QRect(90, 160, 221, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        uBox_2->setPalette(palette6);
        uBox_2->setFont(font1);
        uBox_2->setLayoutDirection(Qt::LeftToRight);
        uBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        uBox_2->setFrame(false);
        uBox_2->setCursorPosition(0);
        pBox_2 = new QLineEdit(frame_5);
        pBox_2->setObjectName("pBox_2");
        pBox_2->setGeometry(QRect(90, 220, 221, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        pBox_2->setPalette(palette7);
        pBox_2->setFont(font1);
        pBox_2->setLayoutDirection(Qt::LeftToRight);
        pBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        pBox_2->setInputMethodHints(Qt::ImhNone);
        pBox_2->setFrame(false);
        pBox_2->setCursorPosition(0);
        editedButton = new QPushButton(frame_5);
        editedButton->setObjectName("editedButton");
        editedButton->setGeometry(QRect(540, 400, 171, 21));
        editedButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        eBox_2 = new QLineEdit(frame_5);
        eBox_2->setObjectName("eBox_2");
        eBox_2->setGeometry(QRect(90, 280, 221, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        eBox_2->setPalette(palette8);
        eBox_2->setFont(font1);
        eBox_2->setLayoutDirection(Qt::LeftToRight);
        eBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        eBox_2->setInputMethodHints(Qt::ImhNone);
        eBox_2->setFrame(false);
        eBox_2->setCursorPosition(0);
        backButton_2 = new QPushButton(frame_5);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setGeometry(QRect(40, 400, 171, 21));
        backButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        regLabel_2 = new QLabel(frame_5);
        regLabel_2->setObjectName("regLabel_2");
        regLabel_2->setGeometry(QRect(130, 110, 271, 16));
        regLabel_2->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        uplButton_2 = new QPushButton(frame_5);
        uplButton_2->setObjectName("uplButton_2");
        uplButton_2->setGeometry(QRect(500, 290, 171, 21));
        uplButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"background: #333;\n"
"color: rgb(214, 214, 214);"));
        rpLabel_2 = new QLabel(frame_5);
        rpLabel_2->setObjectName("rpLabel_2");
        rpLabel_2->setGeometry(QRect(530, 140, 128, 128));
        rpLabel_2->setStyleSheet(QString::fromUtf8("color: #fefefe;"));
        label_5->raise();
        uBox_2->raise();
        pBox_2->raise();
        eBox_2->raise();
        backButton_2->raise();
        regLabel_2->raise();
        editedButton->raise();
        uplButton_2->raise();
        rpLabel_2->raise();
        winStack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        winStack->addWidget(page_4);
        LoginSystem->setCentralWidget(centralWidget);

        retranslateUi(LoginSystem);

        winStack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LoginSystem);
    } // setupUi

    void retranslateUi(QMainWindow *LoginSystem)
    {
        LoginSystem->setWindowTitle(QCoreApplication::translate("LoginSystem", "Login System 1.0", nullptr));
        label->setText(QCoreApplication::translate("LoginSystem", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:700;\">\347\231\273\345\275\225</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        usernameBox->setToolTip(QCoreApplication::translate("LoginSystem", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        usernameBox->setWhatsThis(QCoreApplication::translate("LoginSystem", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        usernameBox->setText(QString());
        usernameBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "\347\224\250\346\210\267\345\220\215", nullptr));
        passwordBox->setInputMask(QString());
        passwordBox->setText(QString());
        passwordBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginSystem", "\347\231\273\345\275\225", nullptr));
        regButton->setText(QCoreApplication::translate("LoginSystem", "\346\263\250\345\206\214", nullptr));
        loginLabel->setText(QString());
        label_7->setText(QString());
        reset->setText(QCoreApplication::translate("LoginSystem", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", nullptr));
        label_2->setText(QCoreApplication::translate("LoginSystem", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:700;\">\346\263\250\345\206\214</span></p></body></html>", nullptr));
        uBox->setText(QString());
        uBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "\347\224\250\346\210\267\345\220\215", nullptr));
        pBox->setInputMask(QString());
        pBox->setText(QString());
        pBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "\345\257\206\347\240\201", nullptr));
        completeRegButton->setText(QCoreApplication::translate("LoginSystem", "\346\263\250\345\206\214", nullptr));
        eBox->setInputMask(QString());
        eBox->setText(QString());
        eBox->setPlaceholderText(QCoreApplication::translate("LoginSystem", "\351\202\256\347\256\261", nullptr));
        backButton->setText(QCoreApplication::translate("LoginSystem", "\350\277\224\345\233\236", nullptr));
        regLabel->setText(QCoreApplication::translate("LoginSystem", "<html><head/><body><p align=\"right\">\350\257\267\345\241\253\345\206\231\344\270\252\344\272\272\344\277\241\346\201\257</p></body></html>", nullptr));
        rpLabel->setText(QString());
        uplButton->setText(QCoreApplication::translate("LoginSystem", "\344\270\212\344\274\240\345\233\276\347\211\207", nullptr));
        loggedUserHeader->setText(QCoreApplication::translate("LoginSystem", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:700;\">\346\210\221\347\232\204\344\270\273\351\241\265</span></p></body></html>", nullptr));
        logoutButton->setText(QCoreApplication::translate("LoginSystem", "SIGN OUT", nullptr));
        label_3->setText(QCoreApplication::translate("LoginSystem", "Name:", nullptr));
        nameLabel->setText(QString());
        editButton->setText(QCoreApplication::translate("LoginSystem", "EDIT MY PROFILE", nullptr));
        delButton->setText(QCoreApplication::translate("LoginSystem", "DELETE MY ACCOUNT", nullptr));
        label_6->setText(QCoreApplication::translate("LoginSystem", "E-mail:", nullptr));
        emailLabel->setText(QString());
        loggedPic->setText(QCoreApplication::translate("LoginSystem", "<img src=\":user.png\" />", nullptr));
        label_5->setText(QCoreApplication::translate("LoginSystem", "<html><head/><body><p><span style=\" font-size:26pt; font-weight:700;\">\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257</span></p></body></html>", nullptr));
        uBox_2->setText(QString());
        uBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Username", nullptr));
        pBox_2->setInputMask(QString());
        pBox_2->setText(QString());
        pBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "Password", nullptr));
        editedButton->setText(QCoreApplication::translate("LoginSystem", "SUBMIT CHANGES", nullptr));
        eBox_2->setInputMask(QString());
        eBox_2->setText(QString());
        eBox_2->setPlaceholderText(QCoreApplication::translate("LoginSystem", "E-mail", nullptr));
        backButton_2->setText(QCoreApplication::translate("LoginSystem", "BACK TO MY PAGE", nullptr));
        regLabel_2->setText(QCoreApplication::translate("LoginSystem", "\345\234\250\344\270\213\346\226\271\344\277\256\346\224\271\346\202\250\347\232\204\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        uplButton_2->setText(QCoreApplication::translate("LoginSystem", "CHANGE PICTURE", nullptr));
        rpLabel_2->setText(QCoreApplication::translate("LoginSystem", "<img src=\":user.png\" />", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginSystem: public Ui_LoginSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSYSTEM_H
