#ifndef _PF_
#define _PF_
#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.h"

using namespace std;

class PuzzleFactory {

public:
    virtual ~PuzzleFactory(){};
    virtual Puzzle* createPuzzle(Puzzle* base) = 0;

private:
    
};

#endif