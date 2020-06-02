
#include "helper.h"

/* Промежуточная функция вызова решения судоку */
Puzzle solve(Puzzle& puzzle, int* answer) {
    Puzzle solution = puzzle;
    if( solveHelper( &solution ) ) {
        return solution;
    }
    *answer=0;
    return Puzzle();
}
