#include "SudokuPopulation.h"

// SudokuPopulation::SudokuPopulation(){

// }

// SudokuPopulation::~SudokuPopulation(){

// }


SudokuPopulation::SudokuPopulation(int pop_size, int max_gen){
    population_size = pop_size;
    max_generation = max_gen;
}

int SudokuPopulation::getIndex(){
    return best_index;
}

bool SudokuPopulation::setIndex(int index){
    best_index = index;
}

bool SudokuPopulation::cull(){
    // we know that we only want 10% of the population, so...
    int take_amount = population.size() * 0.1;

    // bubble sort from greatest fit to least fit (0-324) (Welcome to optimize this)
    for(int i = 0; i < population.size() - 1;i++){
        for(int j = 0; j < population.size() - i -1; j++){
            if(population[j].getFitness() > population[j+1].getFitness()){
                swap(&population[j],&population[j+1]);
            }
        }
    }

    // now having the sorted vector of sudokus, we just need to get take_amount of sudokus
    // pop the rest
    for(int i = population.size() - 1; i > take_amount; i--){
        population.pop_back();
    }
}

void SudokuPopulation::swap(Sudoku* val1, Sudoku* val2){
    Sudoku temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

int SudokuPopulation::bestFitness(){
    int best_index = 0;
    int best_fitness = population[0].getFitness();
    for(int i = 1; i < population.size(); i++){
        if(best_fitness > population[i].getFitness()){
            best_fitness = population[i].getFitness();
            best_index = i;
        }
    }
    setIndex(best_index);
    return best_fitness;
}   

bool SudokuPopulation::newGeneration(){

}

Sudoku SudokuPopulation::bestIndividual(){
    int index = getIndex();

    return population[index];
}