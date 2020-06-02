
#include "helper.h"

bool solveHelper( Puzzle* solution ) {
    if(solution->isEmpty())
        return false;
    int minRow = -1;
    int minColumn = -1;
    Values minValues;
    forever {
        minRow = -1;
        for( int rowIndex = 0; rowIndex < 9; ++rowIndex ) {
            for( int columnIndex = 0; columnIndex < 9; ++columnIndex ) {
                if( ( *solution )[ rowIndex ][ columnIndex ] != 0 ) {
                    continue;
                }
                Values possibleValues = findPossibleValues( rowIndex, columnIndex, *solution );
                int possibleVaueCount = possibleValues.count();
                if( possibleVaueCount == 0 ) {
                    return false;
                }
                if( possibleVaueCount == 1 ) {
                    ( *solution )[ rowIndex ][ columnIndex ] = *possibleValues.begin();
                }
                if( minRow < 0 || possibleVaueCount < minValues.count() ) {
                    minRow = rowIndex;
                    minColumn = columnIndex;
                    minValues = possibleValues;
                }
            }
        }
        if( minRow == -1 ) {
            return true;
        } else if( 1 < minValues.count() ) {
            break;
        }
    }

    for( auto v : minValues ) {
        Puzzle solutionCopy = *solution;
        solutionCopy[ minRow ][ minColumn ] = v;
        if( solveHelper( &solutionCopy ) ) {
            *solution = solutionCopy;
            return true;
        }
    }
    return false;
}
