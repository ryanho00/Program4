#include <iostream>
#include "Sudoku.h"
#include <string>

using namespace std;

Sudoku::Sudoku(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            sdk[i][j].setVal(0);
        }
    }

    fitness_value = 0;
}

ostream& operator<<(ostream & the_stream, const Sudoku& rhs){
    for(int i = 0; i < 9; i++){
        if(i % 3 == 0){
            the_stream << "+-------+-------+-------+" << endl;
        }

        the_stream << "| ";

        for(int j = 0; j < 9; j++){
            the_stream << rhs.sdk[i][j].getVal() << " ";
            if((j+1) % 3 == 0){
               the_stream << "| "; 
            }
        }
        the_stream << endl;

    }
    the_stream << "+-------+-------+-------+" << endl;
    return the_stream;
}

istream& operator>>(istream & the_stream, const string& rhs){
    int pos = 0;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            sdk[i][j].setVal(rhs.at(pos));
            pos++;
        }
    }
    return the_stream;
}