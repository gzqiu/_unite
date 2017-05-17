#-------------------------------------------------
#
# Project created by QtCreator 2017-05-15T16:39:50
#
#-------------------------------------------------

QT       += sql multimedia

TARGET = _dll_socket_
TEMPLATE = lib

DEFINES += _DLL_SOCKET__LIBRARY

SOURCES += _dll_socket_.cpp

HEADERS += _dll_socket_.h\
        _dll_socket__global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
