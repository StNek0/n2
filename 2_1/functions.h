#pragma once

#include <iostream>

using namespace std;

// ������� ��� ��������� ������������ ������ � ����� ��������� �������
int* createAndFillArray(int& n);

// ������� ��� ������������ ������ ������� ������
void shiftArrayRight(int* arr, int n, int k);

// ������� ��� ������ �������
void printArray(int* arr, int n);

// ������� ��� ������������ ������
void freeArray(int* arr);