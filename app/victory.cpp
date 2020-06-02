
#include "helper.h"

/* Функция проверки успешного окончания игры */
int victory(QVector<int> bricks)
{
    if(bricks.isEmpty())
        return 2;
    QVector<int> numbers;
    for (int i=0; i<9; i++)
        numbers.push_back(0);
    /* Проверяем каждую строчку */
    for(int k=0;k<9;k++){
        for (int i=0; i<9; i++)
            numbers[i]=0;
        for (int i=9*k; i<9*(k+1); i++){
            for(int m=1; m<10; m++)
                if(bricks[i]==m)
                    numbers[m-1]++;
        }
        for (int d=0; d<9; d++){
            if(numbers[d]!=1)
                return 0;
        }
    }
    /* Проверяем каждый столбец */
    for(int k=0;k<9;k++){
        for (int i=0; i<9; i++)
            numbers[i]=0;
        for (int i=(0+k); i<(73+k); i=i+9){
            for(int m=1; m<10; m++)
                if(bricks[i]==m)
                    numbers[m-1]++;
        }
        for (int d=0; d<9; d++){
            if(numbers[d]!=1)
                return 0;
        }
    }
    return 1;
}
