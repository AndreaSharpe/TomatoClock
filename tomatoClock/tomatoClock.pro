QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    body.cpp \
    changepassworddialog.cpp \
    database.cpp \
    loginSystem.cpp \
    main.cpp \
    reset.cpp

HEADERS += \
    body.h \
    changepassworddialog.h \
    database.h \
    loginSystem.h \
    reset.h

FORMS += \
    body.ui \
    changepassworddialog.ui \
    loginsystem.ui \
    reset.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Imgs/设置.png \
    Imgs/设置.png

RESOURCES += \
    images.qrc
