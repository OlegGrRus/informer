#-------------------------------------------------
#
# Project created by QtCreator 2012-03-13T14:51:40
#
#-------------------------------------------------

QT       += core gui sql network

TARGET = Informer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    informertcpserver.cpp \
    currencymodel.cpp

HEADERS  += mainwindow.h \
    informertcpserver.h \
    currencymodel.h

FORMS    += mainwindow.ui

RESOURCES += \
    icons.qrc
