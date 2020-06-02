#include <gtest/gtest.h>

#include "victory_test.h"
#include "transposing_test.h"
#include "swap_rows_test.h"
#include "swap_columns_test.h"
#include "solveHelper_test.h"
#include "solve_test.h"
#include "newGame_test.h"
#include "RowValue_test.h"
#include "ColumnValue_test.h"
#include "BlockValue_test.h"
#include "PossibleValues_test.h"
#include "erasing_test.h"

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
