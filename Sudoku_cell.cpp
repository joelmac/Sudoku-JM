/*
SudokuCell.cpp file.  Defines sudoku cell class
*/
#include "Sudoku_cell.h"

Sudoku_cell::Sudoku_cell(){
	value=0;
	solveable=true;
	hasValue=false;
	candidates=[true,true,true,true,true,true,true,true,true];
}

void Sudoku_cell::check_to_solve(){
	int num_candididates=0;
	int candidate_value=0;
	for(int i=0; i<9;i++){
		num_candidates += candidates[i];
		if(candidates[i]){
			candidate_value=i;
		}
	}
	if(num_candidates==1){
		value = candidate_value;
		hasValue =true;
	}
	if(num_candidates==0){
		solveable=false;
	}
	return;
}

void Sudoku_cell::set_value(int n){
	if(n>9){
		return;
	}
	for(int i=0;i<9;i++){
		candidates[i]=false;
	}
	candidates[n-1]=true;
	hasValue=true;
	value=n;
	solveable=true;
	return;
}

void Sudoku_cell::remove_candidate(int n){
	if(n>9){
		return;
	}
	candidates[n-1] = false;
	return;
}

int Sudoku_cell::get_value(){
	return value;
}
