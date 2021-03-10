#ifndef _FN_
#define _FN_
#include <iostream>
#include <string>
#include <vector>
#include "Sudoku.h"

using namespace std;

class Fitness {

public:

    virtual int howFit(Puzzle* pz) = 0;
};

#endif