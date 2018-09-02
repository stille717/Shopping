#-------------------------------------------------
#
# Project created by QtCreator 2015-09-02T03:33:07
#
#-------------------------------------------------

QT       += core gui

QT       += sql xml
QT +=  webkit
QT +=  webkit\network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Shopping
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    inquire.cpp \
    perchase.cpp \
    logindialog.cpp \
    commodity.cpp \
    order.cpp \
    express.cpp \
    changestate.cpp \
    gragh.cpp

HEADERS  += mainwindow.h \
    login.h \
    inquire.h \
    perchase.h \
    connection.h \
    logindialog.h \
    commodity.h \
    order.h \
    express.h \
    changestate.h \
    gragh.h

FORMS    += mainwindow.ui \
    login.ui \
    inquire.ui \
    perchase.ui \
    logindialog.ui \
    commodity.ui \
    order.ui \
    express.ui \
    changestate.ui \
    gragh.ui

RESOURCES += \
    Image.qrc
RC_FILE = myicon.rc 
