TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    _serial_message_.cpp \
    msg.cpp

HEADERS += \
    _serial_message_.h \
    global.h \
    msg.h
