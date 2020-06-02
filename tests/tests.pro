include(gtest_dependency.pri)

QT += core quick quickcontrols2 
TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt
CONFIG += c++11 qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS +=     \
    ../app/helper.h \
    victory_test.h \
    transposing_test.h \
    swap_rows_test.h \
    swap_columns_test.h \
    solveHelper_test.h \
    solve_test.h \
    newGame_test.h \
    RowValue_test.h \
    ColumnValue_test.h \
    BlockValue_test.h \
    PossibleValues_test.h \
    erasing_test.h

SOURCES +=     main.cpp \
    ../app/newGame.cpp \
    ../app/transposing.cpp \
    ../app/swap_rows_small.cpp \
    ../app/swap_columns_small.cpp \
    ../app/swap_rows_area.cpp \
    ../app/swap_columns_area.cpp \
    ../app/erasing.cpp \
    ../app/victory.cpp \
    ../app/solve.cpp \
    ../app/solveHelper.cpp \
    ../app/findPossibleValues.cpp \
    ../app/getColumnValues.cpp \
    ../app/getBlockValues.cpp \
    ../app/getRowValues.cpp

INCLUDEPATH += ../app

