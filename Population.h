#ifndef _PP_
#define _PP_
#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.h"

using namespace std;

class Population {

public:

    virtual bool cull() = 0;
    virtual bool newGeneration() = 0;
    virtual int bestFitness() = 0;
    virtual Puzzle bestIndividual() = 0;

private:
    vector<Puzzle> population;
    int population_size;
    int max_generation;
};

#endif