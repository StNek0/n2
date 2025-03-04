#pragma once

#include <iostream>
#include <limits>

using namespace std;


// Function for creating and filling an array (one-dimensional)
int* createAndFillArray1D(int rows, int cols);

// A function for creating and filling an array (two-dimensional - an array of pointers)
int** createAndFillArray2D(int rows, int cols);

// Function for output of an array (one-dimensional)
void printArray1D(int* arr, int rows, int cols);

// Function for outputting an array (two-dimensional - an array of pointers)
void printArray2D(int** arr, int rows, int cols);

// Function for finding the maximum on the diagonals and its index (one-dimensional)
void findMaxDiagonal1D(int* arr, int rows, int cols, int& maxVal, int& maxRow, int& maxCol);

// Function for finding the maximum on the diagonals and its index (two-dimensional)
void findMaxDiagonal2D(int** arr, int rows, int cols, int& maxVal, int& maxRow, int& maxCol);

// Function for exchanging elements (one-dimensional)
void swapElements1D(int* arr, int rows, int cols, int row1, int col1, int row2, int col2);

// Function for exchanging elements (two-dimensional)
void swapElements2D(int** arr, int rows, int cols, int row1, int col1, int row2, int col2);

// Function for deleting an array (one-dimensional)
void deleteArray1D(int* arr);

// Function for deleting an array (two-dimensional)
void deleteArray2D(int** arr, int rows);

void method1(int rows, int cols, int maxVal, int maxRow, int maxCol);

void method2(int rows, int cols, int maxVal, int maxRow, int maxCol);