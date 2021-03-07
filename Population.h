#ifndef _PP_
#define _PP_
#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.h"

using namespace std;

class Population {

public:

    Population();
    bool cull();
    bool newGeneration();
    int bestFitness();
    Puzzle bestIndividual();

private:
    vector<Puzzle> population;
    int population_size;
    int max_generation;
};

#endif