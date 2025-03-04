#include "functions.h"


// ������� ��� ��������� ������������ ������ � ����� ��������� �������
int* createAndFillArray(int& n) {
  cout << "Enter size of array (n): ";
  cin >> n;

  int* arr = new int[n];

  cout << "Enter elements of array: ";
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  return arr;
}

// ������� ��� ������������ ������ ������� ������
void shiftArrayRight(int* arr, int n, int k) {

  int* temp = new int[n];

  for (int i = 0; i < n; ++i) {
    temp[(i + k) % n] = arr[i];
  }

  for (int i = 0; i < n; ++i) {
    arr[i] = temp[i];
  }

  delete[] temp;
}

// ������� ��� ������ �������
void printArray(int* arr, int n) {
  cout << "Shifted array: ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// ������� ��� ������������ ������
void freeArray(int* arr) {
  delete[] arr;
}