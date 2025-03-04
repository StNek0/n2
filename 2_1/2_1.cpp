#include "functions.h"

int main() {
  int n;
  int* arr = createAndFillArray(n);

  int k;
  cout << "Enter number of positions to shift to right (k): ";
  cin >> k;

  shiftArrayRight(arr, n, k);

  printArray(arr, n);

  freeArray(arr);

  return 0;
}