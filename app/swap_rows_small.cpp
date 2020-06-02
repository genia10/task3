
#include "helper.h"

/* Функция обмена двух строк в пределах одного района */
void swap_rows_small (QVector<int>* bricks) {
    srand(time(NULL)); // для функции rand()
    int area, line1, line2, tmp;
    area = rand()%3 + 1; // выбираем случайно район
    line1 = 3*(area-1)+rand()%3;
    line2 = 3*(area-1)+rand()%3;
    while (line2 == line1)
        line2 = 3*(area-1)+rand()%3;
    for(int i=0;i<9;i++){
        tmp = bricks->value(9*line1+i);
        bricks->replace(9*line1+i, bricks->value(9*line2+i));
        bricks->replace(9*line2+i, tmp);
    }
}
