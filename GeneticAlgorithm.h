#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.h"
#include "PuzzleFactory.h"
#include <random>

using namespace std;

class GeneticAlgorithm{

public:
    GeneticAlgorithm(int pop_size, int max_gen);
    void process();
private:
    int population_size, max_generation;
};
