
#include "helper.h"

/* Функция получения значений блока */
Values getBlockValues( int rowIndex, int columnIndex, const Puzzle& puzzle ) {
    Values values;
    int blockRowStart = 3 * ( rowIndex / 3 );
    int blockColumnStart = 3 * ( columnIndex / 3 );
    for( int r = 0; r < 3; ++r ) {
        for( int c = 0; c < 3; ++c ) {
            values << puzzle[ blockRowStart + r ][ blockColumnStart + c ];
        }
    }
    return values;
}
