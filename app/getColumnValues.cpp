
#include "helper.h"

/* Функция получения значений столбца */
Values getColumnValues( int columnIndex, const Puzzle& puzzle ) {
    Values values;
    for( int r = 0; r < 9; ++r ) {
        values << puzzle[ r ][ columnIndex ];
    }
    return values;
}
