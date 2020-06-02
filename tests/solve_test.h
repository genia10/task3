#include <gtest/gtest.h>

#include "helper.h"


TEST(SOLVE, num0)
{
    Puzzle puzzle = {
            { 0, 0, 0, 0, 6, 0, 7, 0, 0 },
            { 0, 5, 9, 0, 0, 0, 0, 0, 0 },
            { 0, 1, 0, 2, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 1, 0, 0, 0, 0, 0 },
            { 6, 0, 0, 5, 0, 0, 0, 0, 0 },
            { 3, 0, 0, 0, 0, 0, 4, 6, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0, 0, 9, 1 },
            { 8, 0, 0, 7, 4, 0, 0, 0, 0 }
        };
    Puzzle solution = puzzle;
    int answer=1;
    puzzle = solve(puzzle, &answer);
    EXPECT_NE(puzzle, solution);
    EXPECT_EQ(answer, 1);
    QVector<int> bricks;
    for(int i=0; i<9;i++)
        for(int k=0;k<9;k++)
            bricks.push_back(puzzle[ i ][ k ]);
    EXPECT_EQ(victory(bricks), 1);
}

TEST(SOLVE, num1)
{
    Puzzle puzzle;
    int answer=1;
    puzzle = solve(puzzle, &answer);
    EXPECT_EQ(answer, 0);
    Puzzle solution;
    EXPECT_EQ(puzzle, solution);
}

TEST(SOLVE, num2)
{
    Puzzle puzzle = {
        { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9 }
    };
    Puzzle solution = puzzle;
    int answer=1;
    puzzle = solve(puzzle, &answer);
    EXPECT_EQ(puzzle, solution);
}

