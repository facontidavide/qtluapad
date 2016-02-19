#-------------------------------------------------
#
# Project created by QtCreator 2010-09-22T18:15:27
#
#-------------------------------------------------

QT       += core gui network widgets

CONFIG += qscintilla2 xml2

QMAKE_CXXFLAGS += -std=c++11

TARGET = QtLuaPad
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    luaeditor.cpp \
    options.cpp \
    finddialog.cpp \
    questcreator.cpp \
    luaexecutor.cpp \
    motorcontrol.cpp

HEADERS  += mainwindow.h \
    luaeditor.h \
    definitions.h \
    options.h \
    finddialog.h \
    questcreator.h \
    luaexecutor.h \
    motorcontrol.h

FORMS    += mainwindow.ui \
            options.ui \
            finddialog.ui \
            questcreator.ui

LIBS += -lqscintilla2 -lxml2 -llua5.2

INCLUDEPATH += /usr/include/libxml2 /usr/include/lua5.2

RESOURCES += \
    icons/res_icon.qrc

RC_FILE += icon.rc
