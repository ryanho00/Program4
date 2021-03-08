#include "Puzzle.h"

class Sudoku: public Puzzle{
    public:
    Sudoku();

    friend ostream& operator<<(ostream & the_stream, const Puzzle& rhs);

    friend ostream& operator>>(ostream & the_stream, const Puzzle& rhs);

    private:
    SudokuSquare sdk[9][9];     
    int fitness_value;
};