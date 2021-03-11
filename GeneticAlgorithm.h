#include <iostream>
#include <string>
#include <vector>
#include "SudokuFactory.h"
#include "SudokuPopulation.h"
#include <random>

using namespace std;

class GeneticAlgorithm{

public:
    GeneticAlgorithm(int pop_size, int max_gen);
    void process();
private:
    int population_size, max_generation;
    Population *populationManager;
    Puzzle *toSolve;
    PuzzleFactory *factory;
};
