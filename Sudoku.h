#include "SudokuSquare.h"
#include "Puzzle.h"
#include <vector>

using namespace std;

class Sudoku: public Puzzle{
    public:
    Sudoku();
    ~Sudoku();
    ostream& print(ostream& the_stream);
    istream& readPuzzle(istream& the_stream);

    private:
    SudokuSquare** sdk;
    int fitness_value;
};