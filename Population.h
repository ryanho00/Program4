#ifndef _PP_
#define _PP_
#include <iostream>
#include <string>
#include <vector>
#include "Fitness.h"

using namespace std;

class Population {

public:
    
    virtual bool cull() = 0;
    virtual bool newGeneration() = 0;
    virtual int bestFitness() = 0;
    virtual Sudoku bestIndividual() = 0;

private:
};

#endif