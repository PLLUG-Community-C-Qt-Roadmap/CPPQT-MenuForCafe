TEMPLATE += app
QMAKE_CXXFLAGS += -std=c++14
QT += core gui widgets

CONFIG += c++14
#CONFIG -= app_bundle
#CONFIG -= qt

include($$PWD/core/MenuForCafeCore.pri)

SOURCES += \
    $$PWD/main.cpp \
    $$PWD/texteditprintmenuvisitor.cpp \
    $$PWD/helpervisitor.cpp \
    $$PWD/menuiterator.cpp \
    $$PWD/mainwindow.cpp \
    $$PWD/menuitemeditor.cpp

HEADERS += \
    $$PWD/texteditprintmenuvisitor.h \
    $$PWD/helpervisitor.h \
    $$PWD/menuiterator.h \
    $$PWD/mainwindow.h \
    $$PWD/menuitemeditor.h

FORMS += \
    $$PWD/mainwindow.ui \
    $$PWD/menuitemeditor.ui
