#include <iostream>
#include "Sudoku.h"
#include <string>

using namespace std;

Sudoku::Sudoku(){
   cout << "Making a new Sudoku!" << endl;
   sdk = new SudokuSquare*[9];
    for(int i = 0; i < 9; i++){
       sdk[i] = new SudokuSquare[9];
    }
    fitness_value = 0;
    cout << "DONE!" << endl;
}

Sudoku::Sudoku(Sudoku &copy){
    sdk = new SudokuSquare*[9];
    for(int i = 0; i < 9; i++){
       sdk[i] = new SudokuSquare[9];
    }

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            sdk[i][j].setVal(copy.getArray(i,j).getVal());
            sdk[i][j].setFixed(copy.getArray(i,j).getFixed());
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

void Sudoku::setArray(int val, int x, int y){
    sdk[x][y].setVal(val);
}

SudokuSquare Sudoku::getArray(int x, int y){
    return sdk[x][y];
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