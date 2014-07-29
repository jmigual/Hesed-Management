#-------------------------------------------------
#
# Project created by QtCreator 2014-07-16T20:59:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Hesed
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    person.cpp \
    InsDialog.cpp

HEADERS  += \
    mainwindow.h \
    person.h \
    info.h \
    InsDialog.h

FORMS    += \
    mainwindow.ui \   
    InsDialog.ui

RESOURCES += \
    Resources.qrc

OTHER_FILES += \
    Doxyfile \
    hesed.rc

RC_FILE += hesed.rc
