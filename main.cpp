#include "Sudoku_cell.h"
#include <iostream>

using namespace std;

int main(){
  cout << "test" << endl;
  Sudoku_cell T;
  T.set_value(3);
  cout << T.get_value();
  return 0;
}
