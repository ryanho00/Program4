#ifndef _FN_
#define _FN_
#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.h"

using namespace std;

class Fitness {

public:

    Fitness();
    int howFit(Puzzle sdk);
    int duplicateRow(Puzzle sdk);
    int duplicateRow(Puzzle sdk);
    int duplicateBlock(Puzzle sdk);

private:
    
};

#endif