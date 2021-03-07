#ifndef _RP_
#define _RP_
#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.h"
#include "SudokuSquare.h"

using namespace std;

class Reproduction {

public:

    Reproduction();

    Puzzle makeOffSpring(Puzzle sdk);

    SudokuSquare mutate(SudokuSquare square);

private:
    int mutation_rate;
};

#endif