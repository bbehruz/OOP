TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cash_machine.cpp \
        check.cpp \
        main.cpp \
        product.cpp \
        store.cpp \
        toy.cpp

HEADERS += \
    cash_machine.h \
    check.h \
    product.h \
    store.h \
    toy.h
