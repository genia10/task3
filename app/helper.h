#ifndef HELPER_H
#define HELPER_H

#include <QObject>
#include <QVector>
#include <iostream>
#include <QDebug>
using namespace std;

typedef QVector<QVector<int> > Puzzle;
typedef QList< int > Values;


    QVector<int> newGame();
    void transposing (QVector<int>* bricks);
    void swap_rows_small (QVector<int>* bricks);
    void swap_columns_small (QVector<int>* bricks);
    void swap_rows_area (QVector<int>* bricks);
    void swap_columns_area (QVector<int>* bricks);
    void erasing (QVector<int>* bricks);
    int victory(QVector<int> bricks);
    Puzzle solve(Puzzle& puzzle, int *answer );
    bool solveHelper( Puzzle* solution );
    Values findPossibleValues( int rowIndex, int columnIndex, const Puzzle& puzzle );
    Values getRowValues( int rowIndex, const Puzzle& puzzle );
    Values getColumnValues( int columnIndex, const Puzzle& puzzle );
    Values getBlockValues( int rowIndex, int columnIndex, const Puzzle& puzzle );


#endif // HELPER_H

