#ifndef _FN_
#define _FN_
#include <iostream>
#include <string>
#include <vector>
#include "Sudoku.h"

using namespace std;

class Fitness {

public:

    virtual int howFit(Sudoku sdk) = 0;
    virtual int duplicateRow(Sudoku sdk) = 0;
    virtual int duplicateBlock(Sudoku sdk) = 0;
    virtual int duplicateColumn(Sudoku sdk) = 0;

private:
    virtual int countEachBlock(Sudoku sdk, int start_x, int start_y, int end_x, int end_y) = 0;
};

#endif