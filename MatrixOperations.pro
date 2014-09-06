#-------------------------------------------------
#
# Project created by QtCreator 2014-08-17T11:30:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MatrixOperations
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    FirstMatrixWindow.cpp \
    SecondMatrixWindow.cpp \
    ResultMatrixWindow.cpp \
    Delegate.cpp

HEADERS  += MainWindow.h \
    FirstMatrixWindow.h \
    SecondMatrixWindow.h \
    ResultMatrixWindow.h \
    Delegate.h

FORMS    += MainWindow.ui \
    FirstMatrixWindow.ui \
    SecondMatrixWindow.ui \
    ResultMatrixWindow.ui
