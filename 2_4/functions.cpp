#include "functions.h"

void push(Node*& front, Node*& end, char* word) {
    Node* newNode = new Node;
    newNode->word = word;
    newNode->next = nullptr;
    if (end != nullptr) {
        end->next = newNode;
    }
    end = newNode;
    if (front == nullptr) {
        front = newNode;
    }
}

bool isEmpty(Node* front) {
    return front == nullptr;
}

char* pop(Node*& front) {
    if (isEmpty(front)) {
        return nullptr;
    }

    char* word = front->word;
    front = front->next;
    return word;
}

bool isSeparator(char c) {
    return c == ' ' || c == '.' || c == ',' || c == ':' ||
        c == ';' || c == '!' || c == '?' || c == '-' ||
        c == '(' || c == ')';
}

void wordFilter(char* word, int wordLength, const char* wordStart, Node*& front, Node*& endEl) {
    word = new char[wordLength + 1];
    for (int j = 0; j < wordLength; ++j) {
        word[j] = wordStart[j];
    }
    word[wordLength] = '\0';
    if (word[0] == 'p' && word[1] == 'r') {
        push(front, endEl, word);
    }
    else {
        delete[] word;
    }
}

void filterWords(const char* text) {
    Node* front = nullptr;
    Node* endEl = nullptr;
    const char* wordStart = nullptr;
    char* word = nullptr;
    int wordLength = 0;

    for (int i = 0; text[i] != '\0'; ++i) {
        if (!isSeparator(text[i])) {
            if (wordStart == nullptr) {
                wordStart = text + i;
            }
            wordLength++;
        }
        else {
            if (wordStart != nullptr) {
                wordFilter(word, wordLength, wordStart, front, endEl);
                wordStart = nullptr;
                wordLength = 0;
            }
        }
    }

    if (wordStart != nullptr) {
        wordFilter(word, wordLength, wordStart, front, endEl);
    }

    cout << "Words starting with 'pr': ";
    while (!isEmpty(front)) {
        char* resultWord = pop(front);
        cout << resultWord << " ";
        delete[] resultWord;
    }
    cout << endl;
}