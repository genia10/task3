
#include "helper.h"

QVector<int> newGame()
{
    /* Базовая сетка */
    QVector<int> bricks = {
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

    /* Генерация судоку - рандомный вызов 5 функций */
    srand(time(NULL)); // для функции rand()
    int func;
    int count = rand()%1000 + 1;
    for(int i = 0; i < count; i++){
        func = rand()%5 + 1;
        switch(func){
        case 1:
            transposing(&bricks);
            break;
        case 2:
            for(int l=0;l<15;l++)
                swap_rows_small(&bricks);
            break;
        case 3:
            for(int l=0;l<15;l++)
                swap_columns_small(&bricks);
            break;
        case 4:
            swap_rows_area(&bricks);
            break;
        case 5:
            swap_columns_area(&bricks);
            break;
        }
    }

    /* Стирание ячеек */
    erasing(&bricks);

    return bricks;
}
