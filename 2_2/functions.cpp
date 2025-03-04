#include "functions.h"

// Function for creating and filling an array (one-dimensional)
int* createAndFillArray1D(int rows, int cols) {
  int* arr = new int[rows * cols];
  cout << "Enter elements of array:" << endl;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cin >> arr[i * cols + j];
    }
  }
  return arr;
}

// A function for creating and filling an array (two-dimensional - an array of pointers)
int** createAndFillArray2D(int rows, int cols) {
  int** arr = new int* [rows];
  for (int i = 0; i < rows; ++i) {
    arr[i] = new int[cols];
  }

  cout << "Enter elements of array:" << endl;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cin >> arr[i][j];
    }
  }
  return arr;
}

// Function for output of an array (one-dimensional)
void printArray1D(int* arr, int rows, int cols) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << arr[i * cols + j] << " ";
    }
    cout << endl;
  }
}

// Function for outputting an array (two-dimensional - an array of pointers)
void printArray2D(int** arr, int rows, int cols) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

// Function for finding the maximum on the diagonals and its index (one-dimensional)
void findMaxDiagonal1D(int* arr, int rows, int cols, int& maxVal, int& maxRow, int& maxCol) {
  maxVal = numeric_limits<int>::min();
  maxRow = -1;
  maxCol = -1;

  for (int i = 0; i < rows && i < cols; ++i) {
    if (arr[i * cols + i] > maxVal) {
      maxVal = arr[i * cols + i];
      maxRow = i;
      maxCol = i;
    }
  }

  for (int i = 0; i < rows && i < cols; ++i) {
    if (arr[i * cols + (cols - 1 - i)] > maxVal) {
      maxVal = arr[i * cols + (cols - 1 - i)];
      maxRow = i;
      maxCol = cols - 1 - i;
    }
  }
}

// Function for finding the maximum on the diagonals and its index (two-dimensional)
void findMaxDiagonal2D(int** arr, int rows, int cols, int& maxVal, int& maxRow, int& maxCol) {
  maxVal = numeric_limits<int>::min();
  maxRow = -1;
  maxCol = -1;

  for (int i = 0; i < rows && i < cols; ++i) {
    if (arr[i][i] > maxVal) {
      maxVal = arr[i][i];
      maxRow = i;
      maxCol = i;
    }
  }
  for (int i = 0; i < rows && i < cols; ++i) {
    if (arr[i][cols - 1 - i] > maxVal) {
      maxVal = arr[i][cols - 1 - i];
      maxRow = i;
      maxCol = cols - 1 - i;
    }
  }
}

// Function for exchanging elements (one-dimensional)
void swapElements1D(int* arr, int rows, int cols, int row1, int col1, int row2, int col2) {
  int temp = arr[row1 * cols + col1];
  arr[row1 * cols + col1] = arr[row2 * cols + col2];
  arr[row2 * cols + col2] = temp;
}

// Function for exchanging elements (two-dimensional)
void swapElements2D(int** arr, int rows, int cols, int row1, int col1, int row2, int col2) {
  int temp = arr[row1][col1];
  arr[row1][col1] = arr[row2][col2];
  arr[row2][col2] = temp;
}

// Function for deleting an array (one-dimensional)
void deleteArray1D(int* arr) {
  delete[] arr;
  arr = nullptr;
}

// Function for deleting an array (two-dimensional)
void deleteArray2D(int** arr, int rows) {
  for (int i = 0; i < rows; ++i) {
    delete[] arr[i];
  }
  delete[] arr;
  arr = nullptr;
}

void method1(int rows, int cols, int maxVal, int maxRow, int maxCol) {
  int* arr1D = createAndFillArray1D(rows, cols);

  cout << "--- Method 1: One-dimensional array ---" << endl;
  cout << "Source array:" << endl;
  printArray1D(arr1D, rows, cols);

  findMaxDiagonal1D(arr1D, rows, cols, maxVal, maxRow, maxCol);

  if (maxRow != -1) {
    cout << "Maximum element on the diagonals: " << maxVal << " (index: " << maxRow << ", " << maxCol << ")" << endl;
    swapElements1D(arr1D, rows, cols, rows / 2, cols / 2, maxRow, maxCol);
    cout << "The array after the exchange:" << endl;
    printArray1D(arr1D, rows, cols);
  }
  else {
    cout << "No diagonals found." << endl;
  }

  deleteArray1D(arr1D);
}

void method2(int rows, int cols, int maxVal, int maxRow, int maxCol) {
  int** arr2D = createAndFillArray2D(rows, cols);

  cout << "\n--- Method 2: Pointer to an array of pointers ---" << endl;
  cout << "Source array:" << endl;
  printArray2D(arr2D, rows, cols);

  findMaxDiagonal2D(arr2D, rows, cols, maxVal, maxRow, maxCol);

  if (maxRow != -1) {
    cout << "Maximum element on the diagonals: " << maxVal << " (index: " << maxRow << ", " << maxCol << ")" << endl;
    swapElements2D(arr2D, rows, cols, rows / 2, cols / 2, maxRow, maxCol);
    cout << "The array after the exchange:" << endl;
    printArray2D(arr2D, rows, cols);
  }
  else {
    cout << "No diagonals found." << endl;
  }

  deleteArray2D(arr2D, rows);
}