#include <gtest/gtest.h>

#include "helper.h"


TEST(NEWGAME, num0)
{
    QVector<int> basegrid = {
        1, 2, 3, 4, 5, 6, 7, 8, 9,
        4, 5, 6, 7, 8, 9, 1, 2, 3,
        7, 8, 9, 1, 2, 3, 4, 5, 6,
        2, 3, 4, 5, 6, 7, 8, 9, 1,
        5, 6, 7, 8, 9, 1, 2, 3, 4,
        8, 9, 1, 2, 3, 4, 5, 6, 7,
        3, 4, 5, 6, 7, 8, 9, 1, 2,
        6, 7, 8, 9, 1, 2, 3, 4, 5,
        9, 1, 2, 3, 4, 5, 6, 7, 8,
    };
    QVector<int> bricks;
    bricks = newGame();
    EXPECT_NE(bricks, basegrid);
    Puzzle puzzle(9, QVector <int> (9, 1) );
    int count = 0;
    for(int i=0; i<9;i++)
        for(int k=0;k<9;k++){
            puzzle[ i ][ k ] = bricks[count];
            count++;
        }
    Puzzle solution = puzzle;
    int answer = 1;
    puzzle = solve(puzzle, &answer);
    EXPECT_NE(puzzle, solution);
    EXPECT_EQ(answer, 1);
}


