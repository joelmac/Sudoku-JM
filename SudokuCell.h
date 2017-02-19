/*
SudokuCell.h file.  Defines struct for sudoku class
*/

class sudoku_cell {
	bool candidates[9];
	int value=0;
};

void check_to_solve(sudoku_cell&);
void remove_candidate(sudoku_cell&,int);
