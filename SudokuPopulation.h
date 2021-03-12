
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Population.h"
#include "SudokuOffSpring.h"
#include "SudokuFitness.h"

using namespace std;


class SudokuPopulation: public Population{
public:
    SudokuPopulation();
    ~SudokuPopulation();
    SudokuPopulation(int pop_size, vector<Puzzle*> firstGen);
    bool cull();
    bool newGeneration();
    int bestFitness();
    Puzzle* bestIndividual();
    void fitnessCheck();
    static bool betterFit(const Puzzle* left, const Puzzle* right);

private:
    vector<Puzzle*> population;
    int best_index;
    bool setIndex(int index);
    int getIndex();
    int population_size;
    int max_generation;
    Reproduction *nextGenerationMaker;
    Fitness *fitnessChecker;
};
