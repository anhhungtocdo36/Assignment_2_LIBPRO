#-------------------------------------------------
#
# Project created by QtCreator 2017-05-22T22:25:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RegisterAndLogIn
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    register.cpp \
    info.cpp

HEADERS  += mainwindow.h \
    login.h \
    register.h \
    info.h

FORMS    += mainwindow.ui \
    login.ui \
    register.ui
