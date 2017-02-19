#ifndef CELL_COLLECTION_H
#define CELL_COLLECTION_H
/*
SudokuCell.h file.  Defines struct for sudoku class
*/
#include <vector>
using std::vector;
class Cell_collection {
public:
	Cell_collection(std::vector<>&);
	~Cell_collection();
	void solve_single();
	vector<Sudoku_cell> cells[];
};
#endif
