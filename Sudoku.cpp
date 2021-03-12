#include <iostream>
#include "Sudoku.h"
#include <string>

using namespace std;

Sudoku::Sudoku(){
   sdk = new SudokuSquare*[9];
    for(int i = 0; i < 9; i++){
       sdk[i] = new SudokuSquare[9];
    }
    fitness_value = 0;
}

Sudoku::Sudoku(Sudoku &copy){
    sdk = new SudokuSquare*[9];
    for(int i = 0; i < 9; i++){
       sdk[i] = new SudokuSquare[9];
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            sdk[i][j].setVal(copy.getArray(i,j).getVal());
            if(sdk[i][j].getFixed())
            {
               sdk[i][j].setFixed(true);
            }
        }
    }
}

Sudoku::~Sudoku(){
   for(int i = 0; i < 9; i++)
   {
      delete[] sdk[i];
      sdk[i] = nullptr;
   }
   delete[] sdk;
   sdk = nullptr;
}

void Sudoku::setArray(int val, bool fixed, int x, int y){
    sdk[x][y].setVal(val);
    sdk[x][y].setFixed(fixed);
}

SudokuSquare Sudoku::getArray(int x, int y){
    return sdk[x][y];
}

bool Sudoku::setFitness(int val){
    fitness_value = val;
    return true;
}

int Sudoku::getFitness() const{
    return fitness_value;
}

ostream& Sudoku::print(ostream& the_stream) {
    for(int i = 0; i < 9; i++){
        if(i % 3 == 0){
            the_stream << "+-------+-------+-------+" << endl;
        }
         the_stream << "| ";

        for(int j = 0; j < 9; j++){
            the_stream << sdk[i][j].getVal() << " ";
            if((j + 1) % 3 == 0){
               the_stream << "| "; 
            }
        }
      the_stream << endl;
    }
    the_stream << "+-------+-------+-------+" << endl;

    the_stream << "Fitness value: " << fitness_value << endl;
    return the_stream;
}

istream& Sudoku::readPuzzle(istream &the_stream) {
   string tempString;
   the_stream >> tempString;

   int pos = 0;
   for(int i = 0; i < 9; i++)
   {
      for(int j = 0; j < 9; j++)
      {
         sdk[i][j].setVal(tempString.at(pos) - '0');
         if(sdk[i][j].getVal() != 0)
         {
            sdk[i][j].setFixed(true);
         }
         pos++;
      }
   }
   return the_stream;
}

/*
bool operator<(const Sudoku &lhs, const Sudoku &rhs){
   return lhs.fitness_value < rhs.fitness_value;
}

bool operator>(const Sudoku &lhs, const Sudoku &rhs){
   return lhs.fitness_value > rhs.fitness_value;
} */

bool Sudoku::lessThan(const Puzzle *rhs) const{
   return fitness_value < rhs->getFitness();
}

bool Sudoku::greaterThan(const Puzzle *rhs) const{
   return fitness_value > rhs->getFitness();
}