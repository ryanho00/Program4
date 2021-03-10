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

using namespace std;

class SudokuOffSpring: public Reproduction{
public:
    SudokuOffSpring();

    Puzzle makeOffSpring(Puzzle sdk);

    SudokuSquare mutate(SudokuSquare square);

private:
    int mutation_rate;
};

#endif //SUDOKUPUZZLE_SUDOKUOFFSPRING_H
