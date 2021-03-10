#include "SudokuFactory.h"
#include "Sudoku.h"
#include <random>

SudokuFactory::SudokuFactory(){
    
}

Puzzle* SudokuFactory::createPuzzle(){
   Puzzle *tempSudoku = new Sudoku();
   
    uniform_int_distribution<int> uniform(1,9);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            tempSudoku->setArray(uniform(generator), i, j);
        }
    }
    return tempSudoku;
}