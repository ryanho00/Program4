#ifndef _PP_
#define _PP_
#include <iostream>
#include <string>
#include <vector>
#include "Fitness.h"

using namespace std;

class Population {

public:
    virtual ~Population(){};
    virtual bool cull() = 0;
    virtual bool newGeneration() = 0;
    virtual int bestFitness() = 0;
    virtual Puzzle* bestIndividual() = 0;
};

#endif