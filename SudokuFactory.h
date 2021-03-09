
#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.h"
#include "PuzzleFactory.h"
#include <random>

using namespace std;

class SudokuFactory: public PuzzleFactory{

public:
    SudokuFactory();
    ~SudokuFactory();
    Puzzle* createPuzzle();

private:
    default_random_engine generator;
};
