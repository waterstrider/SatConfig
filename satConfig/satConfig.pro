#-------------------------------------------------
#
# Project created by QtCreator 2015-07-02T14:02:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = satConfig
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    satconfigsys.cpp

HEADERS  += mainwindow.h \
    satconfigsys.h \
    globalcontext.h

FORMS    += mainwindow.ui

OTHER_FILES += conf_sat.txt
