#include "functions.h"

void push(Node*& top, char* word) {
	Node* newNode = new Node;
	newNode->word = word;
	newNode->next = top;
	top = newNode;
	delete newNode;
}

bool isEmpty(Node* top) {
	return (top == nullptr);
}

char* pop(Node*& top) {
	if (isEmpty(top)) return nullptr;

	Node* temp = top;
	char* word = top->word;
	top = top->next;

	delete temp;
	return word;
}

bool isSeparator(char string) {
	return string == ' ' || string == '.' || string == ',' || string == ':'
		|| string == ';' || string == '!' || string == '?'
		|| string == '-' || string == '(' || string == ')';
}

void fillingWord(const char* startWord, Node*& stack, int length) {
	char* word = new char[length + 1];

	for (int j = 0; j < length; ++j) word[j] = startWord[j];

	word[length] = '\0';

	push(stack, word);

	delete[] word;
}

void print(Node*& stack) {
	cout << "Words in reverse order: ";
	while (!isEmpty(stack)) {
		char* reversedWord = pop(stack);
		cout << reversedWord << " ";
		delete[] reversedWord;
	}
}

void reverse(const char* text) {
	Node* stack = nullptr;
	const char* startWord = nullptr;
	char* word = nullptr;
	int length = 0;

	for (int i = 0; text[i] != '\0'; ++i) {
		if (!isSeparator(text[i])) {

			if (startWord == nullptr) {
				startWord = text + i;
			}
			length++;
		}
		else {
			if (startWord != nullptr) {
				fillingWord(startWord, stack, length);

				startWord = nullptr;
				length = 0;
			}
		}
	}

	if (startWord != nullptr) {
		fillingWord(startWord, stack, length);
	}

	print(stack);

	cout << endl;
}