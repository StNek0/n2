#pragma once

#include <iostream>

using namespace std;

// Функция для выделения динамической памяти и ввода элементов массива
int* createAndFillArray(int& n);

// Функция для циклического сдвига массива вправо
void shiftArrayRight(int* arr, int n, int k);

// Функция для вывода массива
void printArray(int* arr, int n);

// Функция для освобождения памяти
void freeArray(int* arr);