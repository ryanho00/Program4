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

    //Reproduction();

    virtual Puzzle makeOffSpring(Puzzle sdk) = 0;

    virtual SudokuSquare mutate(SudokuSquare square) = 0;

private:
    int mutation_rate;
};

#endif