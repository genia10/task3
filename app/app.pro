QT += core quick quickcontrols2 
TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11 qt

SOURCES += \
    main.cpp \
    newGame.cpp \
    transposing.cpp \
    swap_rows_small.cpp \
    swap_columns_small.cpp \
    swap_rows_area.cpp \
    swap_columns_area.cpp \
    erasing.cpp \
    victory.cpp \
    solve.cpp \
    solveHelper.cpp \
    findPossibleValues.cpp \
    getColumnValues.cpp \
    getBlockValues.cpp \
    getRowValues.cpp

HEADERS += \
    helper.h

QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
