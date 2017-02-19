/*
SudokuCell.cpp file.  Defines sudoku cell class
*/
#include "Cell_collection.h"
using std::vector;
Cell_collection::Cell_collection(vector<Sudoku_cell> &Sudoku_cells)
	:	cells( Sudoku_cells)
{
}

Cell_collection::~Cell_collection(){
}

void Cell_collection::solve_single(){
	return;
}

int Cell_collection::len(){
	return cells.size();

}
