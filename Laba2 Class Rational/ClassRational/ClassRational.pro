TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        func.cpp \
        main.cpp \
        rational.cpp

HEADERS += \
    func.h \
    rational.h

STATECHARTS +=

DISTFILES += \
    classrational.qmodel
