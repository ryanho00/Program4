#include "GeneticAlgorithm.h"

//Construct the algorithm with max pop_size and max_gen
//Takes in two int
GeneticAlgorithm::GeneticAlgorithm(int pop_size, int max_gen){
    population_size = pop_size;
    max_generation = max_gen;
}

//Stimulates the genetic algorithm to solve the sudoku
//Takes in nothing
//Assumes that pop_size and max_gen is initialized
//returns nothing
void GeneticAlgorithm::process(){
    factory = new SudokuFactory();
    toSolve = new Sudoku();
    cout << "Please provide us the Sudoku to solve!" << endl;
    cin >> *toSolve;

    vector<Puzzle*> firstGen;

    for(int i = 0; i < population_size; i++){
       firstGen.push_back(factory->createPuzzle(toSolve));
    }

    populationManager = new SudokuPopulation(population_size, firstGen);

    for(int i = 0; i < max_generation; i++)
    {
       cout << "Generation: " << i + 1 << endl;
       cout << "Best puzzle for this generation:" << endl;
       cout << *populationManager->bestIndividual();
       populationManager->bestFitness();
       if(i != max_generation)
       {
          populationManager->cull();
          populationManager->newGeneration();
       }
    }

    delete factory;
    delete toSolve;
    delete populationManager;
}