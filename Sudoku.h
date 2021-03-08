
#include "SudokuSquare.h"
#include "Puzzle.h"

using namespace std;

class Sudoku: public Puzzle{
    public:
    Sudoku();

    friend ostream& operator<<(ostream & the_stream, const Sudoku& rhs);

    friend ostream& operator>>(ostream & the_stream, const Sudoku& rhs);

    private:
    SudokuSquare sdk[9][9];
    int fitness_value;
};