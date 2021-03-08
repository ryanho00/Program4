#include "SudokuSquare.h"
#include "Puzzle.h"

using namespace std;

class Sudoku: public Puzzle{
    public:
    Sudoku();
    ostream& print(ostream& the_stream) const;
    istream& readPuzzle(istream& the_stream) const;

    private:
    SudokuSquare sdk[9][9];
    int fitness_value;
};