#include <iostream>
#include "Sudoku.h"

using namespace std;

Sudoku::Sudoku(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            sdk[i][j].setVal(0);
        }
    }
    fitness_value = 0;
}

ostream& Sudoku::print(ostream& the_stream)const {
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

istream& Sudoku::readPuzzle(istream &the_stream)const {

}