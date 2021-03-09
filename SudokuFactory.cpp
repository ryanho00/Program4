#include "SudokuFactory.h"
#include <random>

SudokuFactory::SudokuFactory(){
    
}

Sudoku SudokuFactory::createPuzzle(Sudoku sdk_template){
    uniform_int_distribution<int> uniform(0,9);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            sdk_template[i][j].setVal(uniform(generator));
        }
    }
}