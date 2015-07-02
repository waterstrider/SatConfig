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
    satconfigsys.cpp \
    passworddialog.cpp \
    editdialog.cpp \
    main.cpp

HEADERS  += mainwindow.h \
    satconfigsys.h \
    globalcontext.h \
    passworddialog.h \
    editdialog.h

FORMS    += mainwindow.ui \
    passworddialog.ui \
    editdialog.ui

OTHER_FILES += conf_sat.txt
