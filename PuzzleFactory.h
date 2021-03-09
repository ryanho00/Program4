#ifndef _PF_
#define _PF_
#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.h"

using namespace std;

class PuzzleFactory {

public:

    //virtual PuzzleFactory() = 0;
    virtual Puzzle& createPuzzle(Puzzle &pz) = 0;

private:
    
};

#endif