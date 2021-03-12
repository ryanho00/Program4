#include "SudokuSquare.h"
#include "Puzzle.h"
#include <vector>

using namespace std;

class Sudoku: public Puzzle{
    public:
    Sudoku();
    Sudoku(Sudoku &copy);
    ~Sudoku();
    ostream& print(ostream& the_stream);
    istream& readPuzzle(istream& the_stream);
    void setArray(int val,bool fixed, int x, int y);
    SudokuSquare getArray(int x, int y);
    bool setFitness(int val);
    int getFitness() const;

    /*
    friend bool operator<(const Sudoku &lhs, const Sudoku &rhs);
    friend bool operator>(const Sudoku &lhs, const Sudoku &rhs);
     */

    bool lessThan(const Puzzle* rhs) const;
    bool greaterThan(const Puzzle* rhs) const;
    private:
    SudokuSquare** sdk;
    int fitness_value;
};