#include <gtest/gtest.h>

#include "helper.h"


TEST(POSSIBLEVALUES, num0)
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
    Values PossibleValues;
    PossibleValues = findPossibleValues(0, 3, puzzle);
    Values expected = {3, 4, 8, 9};
    EXPECT_EQ(PossibleValues, expected);
}


