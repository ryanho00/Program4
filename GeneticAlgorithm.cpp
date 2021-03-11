#include "GeneticAlgorithm.h"

GeneticAlgorithm::GeneticAlgorithm(int pop_size, int max_gen){
    population_size = pop_size;
    max_generation = max_gen;
}

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
       populationManager->bestFitness();
       cout << *populationManager->bestIndividual();
       cout << "Fitness score of " << populationManager->bestFitness() << endl;

       cout << "culling now!" << endl;
       populationManager->cull();
       cout << "culling complete!" << endl;
       cout << "creating next gen!" << endl;
       populationManager->newGeneration();
       cout << "next gen created!" << endl;
    }

    delete factory;
    delete toSolve;
    delete populationManager;
}