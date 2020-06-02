#include <gtest/gtest.h>

#include "helper.h"


TEST(SOLVEHELPER, num0)
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
    EXPECT_EQ(solveHelper(&puzzle),true);
}

TEST(SOLVEHELPER, num1)
{
    Puzzle puzzle = {
            { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
            { 1, 2, 3, 4, 5, 6, 7, 0, 9 },
            { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
            { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
            { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
            { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
            { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
            { 1, 2, 3, 4, 5, 6, 7, 8, 9 },
            { 1, 2, 3, 4, 5, 6, 7, 8, 9 }
        };
    EXPECT_EQ(solveHelper(&puzzle),false);
}

TEST(SOLVEHELPER, num2)
{
    Puzzle puzzle;
    EXPECT_EQ(solveHelper(&puzzle),false);
}


