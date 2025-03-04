#pragma once

#include <iostream>
using namespace std;

const int MAX_LENGTH = 1000;

struct Node {
	char* word;
	Node* next;
};

void push(Node*& top, char* word);

bool isEmpty(Node* top);

char* pop(Node*& top);

void fillingWord(const char* startWord, Node*& stack, int length);

bool isSeparator(char string);

void reverse(const char* text);