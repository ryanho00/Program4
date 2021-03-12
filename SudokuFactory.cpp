#include "SudokuFactory.h"
#include "Sudoku.h"
#include <random>

SudokuFactory::SudokuFactory(){
    
}

SudokuFactory::~SudokuFactory(){

}

Puzzle* SudokuFactory::createPuzzle(Puzzle* base){
   Sudoku *tempSudoku = dynamic_cast<Sudoku *>(base);
   Sudoku *newSudoku = new Sudoku;
    uniform_int_distribution<int> uniform(1,9);
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
           if(!tempSudoku->getArray(i,j).getFixed())
           {
              newSudoku->setArray(uniform(generator),false, i, j);
           }
           else
           {
              newSudoku->setArray(tempSudoku->getArray(i,j).getVal(), true, i, j);
           }
        }
    }

    Puzzle* tempReturn = newSudoku;
    return tempReturn;
}