
#include "helper.h"

/* Функция обмена двух районов вертикали */
void swap_columns_area (QVector<int>* bricks)  {
    transposing(bricks); // транспонируем
    swap_rows_area(bricks); // меняем местами 2 района по горизонтали
    transposing(bricks); // транспонируем обратно
}
