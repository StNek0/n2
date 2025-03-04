#include "functions.h"

int main() {
    char text[maxLength];

    cout << "Enter a sentence: ";
    cin.getline(text, maxLength);

    filterWords(text);

    return 0;
}