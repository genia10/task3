
#include "helper.h"

/* Функция  для стирания ячеек из сгенерированной сетки */
void erasing (QVector<int>* bricks)
{
    srand(time(NULL)); // для функции rand()
    int cell;
    int savedValue;
    int answer=1;
    int count;
    Puzzle puzzle(9, QVector <int> (9, 1) );
    Puzzle solution;
    QVector<int> seen;
    for(int i=0; i<81;i++)
        seen.push_back(0);
    for(int m=0; m<83;m++){
        cell = rand()%81; //  выбираем рандомную ячейку
        if(seen[cell]==1)
            continue;
        seen[cell]=1;
        savedValue = bricks->value(cell); // сохраняем ее значение
        bricks->replace(cell, 0); // "удаляем" ячейку

        /* Заносим bricks в двумерный массив */
        count = 0;
        for(int i=0; i<9;i++)
            for(int k=0;k<9;k++){
                puzzle[ i ][ k ] = bricks->value(count);
                count++;
            }

        solution = solve( puzzle, &answer); // вызываем функцию решения судоку

        /* Проверям есть ли решение, если нет - возвращаем удаленную ячейку и завершаем */
        if( answer == 0 ){
            bricks->replace(cell, savedValue);
            break;
        }
    }

    /* Из двумерного массива обратно в bricks*/
    count=0;
    for(int i=0; i<9;i++)
        for(int k=0;k<9;k++){
            bricks->replace(count, puzzle[ i ][ k ]);
            count++;
        }
}
