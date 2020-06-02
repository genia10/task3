
#include "helper.h"

/* Функция транспонирования сетки */
void transposing (QVector<int>* bricks) {
    int tmp;
    for(int i=0; i<8;i++)
        for(int j=i+1; j<9;j++){
            tmp = bricks->value(9*i+j);
            bricks->replace(9*i+j, bricks->value(9*j+i));
            bricks->replace(9*j+i, tmp);
        }
}
