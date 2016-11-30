QT += core
QT -= gui

CONFIG += c++11

TARGET = SRFactory
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    factory.cpp \
    product.cpp \
    product1.cpp \
    product2.cpp \
    product_maker.cpp \
    product_maker_base.cpp

HEADERS += \
    factory.hpp \
    product.hpp \
    product1.hpp \
    product2.hpp \
    product_maker.hpp \
    product_maker_base.hpp
