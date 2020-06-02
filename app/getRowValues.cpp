
#include "helper.h"

/* Функция получения значений строки */
Values getRowValues( int rowIndex, const Puzzle& puzzle ) {
    Values values;
    for( int r = 0; r < 9; ++r ) {
        values << puzzle[ rowIndex ][ r ];
    }
    return values;
}
