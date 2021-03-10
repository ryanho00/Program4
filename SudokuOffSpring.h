//
// Created by Ryan Ho on 3/9/2021.
//

#ifndef SUDOKUPUZZLE_SUDOKUOFFSPRING_H
#define SUDOKUPUZZLE_SUDOKUOFFSPRING_H
#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.h"
#include "SudokuSquare.h"
#include "Reproduction.h"
#include <random>

using namespace std;

class SudokuOffSpring: public Reproduction {
public:
    SudokuOffSpring();

    Sudoku makeOffSpring(Sudoku sdk);

    SudokuSquare mutate(SudokuSquare square);

private:
    double mutation_rate;
    default_random_engine generator;
};

#endif //SUDOKUPUZZLE_SUDOKUOFFSPRING_H
