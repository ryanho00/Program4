#ifndef _RP_
#define _RP_
#include <iostream>
#include <string>
#include <vector>
#include "Fitness.h"
#include "SudokuSquare.h"

using namespace std;

class Reproduction {

public:

    //Reproduction();

    virtual Puzzle* makeOffSpring(Puzzle *pz) = 0;

    virtual SudokuSquare mutate(SudokuSquare square) = 0;

private:
};

#endif