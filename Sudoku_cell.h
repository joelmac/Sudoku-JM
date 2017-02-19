#ifndef SUDOKU_CELL_H
#define SUDOKU_CELL_H
/*
SudokuCell.h file.  Defines struct for sudoku class
*/

class Sudoku_cell {
private:
	int value;
	bool solveable;
	bool hasValue;

public:
	Sudoku_cell();
	void check_to_solve();
	void remove_candidate(int);
	void set_value(int);
	int get_value();
	bool candidates[9];
};
#endif
