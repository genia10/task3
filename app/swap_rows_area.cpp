
#include "helper.h"

/* Функция обмена двух районов по горизонтали */
void swap_rows_area (QVector<int>* bricks) {
    srand(time(NULL)); // для функции rand()
    int area1, area2, tmp;
    area1 = rand()%3; //
    area2 = rand()%3;
    while(area2 == area1){
        area2 = rand()%3;
    }
    for (int i=0; i<3; i++)
        for(int j=0; j<9;j++){
            tmp = bricks->value(9*3*area1+9*i+j);
            bricks->replace(9*3*area1+9*i+j, bricks->value(9*3*area2+9*i+j));
            bricks->replace(9*3*area2+9*i+j, tmp);
        }

}
