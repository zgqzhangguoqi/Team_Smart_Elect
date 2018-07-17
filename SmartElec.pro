#-------------------------------------------------
#
# Project created by QtCreator 2018-07-15T15:43:40
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartElec
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp

HEADERS  += mainwindow.h \
    login.h

FORMS    += mainwindow.ui \
    login.ui

RESOURCES += \
    resouses.qrc \
    resouses.qrc
