#include <gtest/gtest.h>

#include "helper.h"


TEST(BLOCKNVALUE, num0)
{
    Puzzle puzzle = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9},
        {4, 5, 6, 7, 8, 9, 1, 2, 3},
        {7, 8, 9, 1, 2, 3, 4, 5, 6},
        {2, 3, 4, 5, 6, 7, 8, 9, 1},
        {5, 6, 7, 8, 9, 1, 2, 3, 4},
        {8, 9, 1, 2, 3, 4, 5, 6, 7},
        {3, 4, 5, 6, 7, 8, 9, 1, 2},
        {6, 7, 8, 9, 1, 2, 3, 4, 5},
        {9, 1, 2, 3, 4, 5, 6, 7, 8}
    };
    Values values;
    Values expected = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    values = getBlockValues(2, 7, puzzle);
    EXPECT_EQ(values, expected);
}


