#-------------------------------------------------
#
# Project created by QtCreator 2011-07-24T12:35:19
#
#-------------------------------------------------

QT       -= core gui

TARGET = respect
TEMPLATE = lib

DEFINES += RESPECT_LIBRARY

SOURCES += librespect.cpp

HEADERS += librespect.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xEB603711
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = respect.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
