
#include <iostream>
#include <string>
#include <vector>
//#include "Sudoku.h"
#include <random>

using namespace std;

class SudokuFactory: public PuzzleFactory{

public:
    SudokuFactory();
    Sudoku createPuzzle(Sudoku sdk_template);

private:
    default_random_engine generator;
};
