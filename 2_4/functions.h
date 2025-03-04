#pragma once

#include <iostream>

using namespace std;

const int maxLength = 256;

struct Node {
    char* word;
    Node* next;
};

void push(Node*& front, Node*& end, char* word);

bool isEmpty(Node* front);

char* pop(Node*& front);

bool isSeparator(char c);

void wordFilter(char* word, int wordLength, const char* wordStart, Node*& front, Node*& endEl);

void filterWords(const char* text);