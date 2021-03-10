
#include <iostream>
#include <string>
#include <vector>
#include "Population.h"
//#include "Sudoku.h"

using namespace std;

class SudokuPopulation: public Population{

public:
    SudokuPopulation(int pop_size, int max_gen);
    bool cull();
    bool newGeneration();
    int bestFitness();
    Sudoku bestIndividual();

private:
    vector<Sudoku> population;
    int population_size;
    int max_generation;
};
