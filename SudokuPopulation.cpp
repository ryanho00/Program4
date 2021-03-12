#include "SudokuPopulation.h"
using namespace std;

//Default constructor
SudokuPopulation::SudokuPopulation(){
   nextGenerationMaker = new SudokuOffSpring();
   fitnessChecker = new SudokuFitness();
}

//Default Destructor
SudokuPopulation::~SudokuPopulation(){
   delete nextGenerationMaker;
   for(int i = 0; i < population.size(); i++)
   {
      delete population[i];
   }
   population.clear();
}

//Construct a population given the first generation of puzzles we have
SudokuPopulation::SudokuPopulation(int pop_size, vector<Puzzle*> firstGen){
    population_size = pop_size;
    nextGenerationMaker = new SudokuOffSpring();
    fitnessChecker = new SudokuFitness();
    population = firstGen;
    fitnessCheck();
    sort(population.begin(),population.end(), betterFit);
}

int SudokuPopulation::getIndex(){
    return best_index;
}

bool SudokuPopulation::setIndex(int index){
    best_index = index;
    return true;
}

//Culls 90% of the population with the worst fitness score
//Takes in nothing
//Assumes that population is sorted from best to worst fitness score
//Returns true if we made it to the end
bool SudokuPopulation::cull(){
    // we know that we only want 10% of the population, so...
    int take_amount = population.size() * 0.1;
    // pop the rest
    for(int i = population.size() - 1; i > take_amount; i--){
       population.pop_back();
    }
    return true;
}

//Returns the Sudoku with the best fitness
//Takes in nothing
//Assumes that the population is sorted from best to worst
//Returns the fitness score of the best Sudoku
int SudokuPopulation::bestFitness(){
    return population[0]->getFitness();
}   

//Creates a new generation of population with the parents left
//Takes in nothing
//Assumes that the population is less than the max population size allowed
//returns true if we made it to the end of the function
bool SudokuPopulation::newGeneration(){
   //Create the next generation
   int amountOfParent = population.size();
   while(population.size() < population_size){
      int randomParentIndex = rand() % amountOfParent;
      population.push_back(nextGenerationMaker->makeOffSpring(population[randomParentIndex]));
   }
   fitnessCheck();
   sort(population.begin(),population.end(), betterFit);
   return true;
}

//Returns the Sudoku with the best fitness score
//Takes in nothing
//Assumes that the population is sorted from best to worst fitness score
//Returns Puzzle pointer of the best fitness score Sudoku
Puzzle* SudokuPopulation::bestIndividual(){
    return population[0];
}

//Assign all of the Sudoku their fitness score
//Takes in nothing
//Assumes that the population at least has 1 member in it
//Returns nothing
void SudokuPopulation::fitnessCheck(){
   for(int i = 0; i < population.size(); i++){
      int fitnessToAssign;
      fitnessToAssign = fitnessChecker->howFit(population[i]);
      population[i]->setFitness(fitnessToAssign);
   }
}

//Returns if the left has a better fitness score than the right (For std::sort)
//Takes in 2 puzzles puzzle to compare
//returns true if the first one has a better fitness score
bool SudokuPopulation::betterFit(const Puzzle *left, const Puzzle *right){
   return left->getFitness() < right->getFitness();
}