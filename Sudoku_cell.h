/*
SudokuCell.h file.  Defines struct for sudoku class
*/

class Sudoku_cell {
private:
	int value=0;
	bool solveable=0;

public:
	void check_to_solve();
	void remove_candidate(int);
	void set_value(int);
	int get_value();
	bool candidates[9];
};
