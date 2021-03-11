
#include <iostream>
#include <string>
#include <vector>
#include "Population.h"
#include "SudokuOffSpring.h"

using namespace std;

class SudokuPopulation: public Population{

public:
    SudokuPopulation();
    ~SudokuPopulation();
    SudokuPopulation(int pop_size, int max_gen);
    bool cull();
    bool newGeneration();
    int bestFitness();
    Puzzle* bestIndividual();

private:
    vector<Puzzle*> population;
    int best_index;
    bool setIndex(int index);
    int getIndex();
    int population_size;
    int max_generation;
    //void swap(Puzzle* val1, Puzzle* val2);
    Reproduction *nextGenerationMaker;
};
