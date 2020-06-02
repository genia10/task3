
#include "helper.h"

/* Функция обмена двух столбцов в пределах одного района */
void swap_columns_small (QVector<int>* bricks) {
    transposing(bricks); // транспонируем
    swap_rows_small(bricks); // меняем строки
    transposing(bricks); // транспонируем обратно
}
