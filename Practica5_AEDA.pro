TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += "/home/dani/PracticasAEDA/Practica5_AEDA"

SOURCES += src/main.cpp

HEADERS += \
    include/dni_name.h \
    include/sort_algorithms/insercion.h \
    include/sort_algorithms/burbuja.h \
    include/sort_algorithms/heapsort.h \
    include/sort_algorithms/general.h \
    include/sort_algorithms/quicksort.h \
    include/sort_algorithms/shellsort.h

