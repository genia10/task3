
#include "helper.h"

/* Функция поиска возможных решений для ячейки */
Values findPossibleValues( int rowIndex, int columnIndex, const Puzzle& puzzle ) {
    Values values; // здесь хранятся возможные варианты для ячейки
    Values values1; // сюда получаем то что уже есть в строках/столбцах/квадратах

    /* Изначально для ячейки возможны все варианты */
    for(int i=1; i<10; i++)
        values << i;

    /* Убираем то, что встречается в строке */
    values1 = getRowValues( rowIndex, puzzle );
    for(int i=0; i<values.count();i++)
        for(int k=0;k<values1.count();k++)
            if(values[i] == values1[k]){
                values.removeAt(i);
                i--;
                break;
            }
    /* Убираем то, что встречается в столбце */
    values1 = getColumnValues( columnIndex, puzzle );
    for(int i=0; i<values.count(); i++)
        for(int k=0;k<values1.count(); k++)
            if(values[i] == values1[k]){
                values.removeAt(i);
                i--;
                break;
            }

    /* Убираем то, что встречается в блоке(квадрате 3 х 3) */
    values1 = getBlockValues( rowIndex, columnIndex, puzzle );
    for(int i=0; i<values.count();i++)
        for(int k=0;k<values1.count();k++)
            if(values[i] == values1[k]){
                values.removeAt(i);
                i--;
                break;
            }

    return values;
}

