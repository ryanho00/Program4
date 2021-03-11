#include "SudokuFactory.h"
#include "Sudoku.h"
#include <random>

SudokuFactory::SudokuFactory(){
    
}

SudokuFactory::~SudokuFactory(){

}

Puzzle* SudokuFactory::createPuzzle(Puzzle* base){
   Sudoku *tempSudoku = dynamic_cast<Sudoku *>(base);
    uniform_int_distribution<int> uniform(1,9);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            tempSudoku->setArray(uniform(generator), i, j);
        }
    }

    Puzzle* tempReturn = tempSudoku;
    return tempReturn;
}