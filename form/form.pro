#-------------------------------------------------
#
# Project created by QtCreator 2013-08-23T14:13:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = form
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    xmlreader.cpp \
    grqcommand.cpp \
    gcfcommand.cpp \
    commandfactory.cpp \
    logwindow.cpp

HEADERS  += mainwindow.h \
    grqcommand.h \
    gcfcommand.h \
    commandfactory.h \
    command.h \
    xmlreader.h \
    logwindow.h

FORMS    += mainwindow.ui \
    logwindow.ui
