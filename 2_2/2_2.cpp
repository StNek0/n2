#include "functions.h"

int main() {
  int rows, cols;

  cout << "Enter the number of rows: ";
  cin >> rows;

  cout << "Enter the number of columns: ";
  cin >> cols;

  if (rows % 2 == 0 || cols % 2 == 0) {
    cout << "Error! Programm can`t do this! E-he-he-he-he";
    return 0;
  }

  // Method 1: One-dimensional array
  int maxVal = 0, maxRow = 0, maxCol = 0;
  
  method1(rows, cols, maxVal, maxRow, maxCol);
  
  // Method 2: A pointer to an array of pointers

  method2(rows, cols, maxVal, maxRow, maxCol);

  return 0;
}