#include "functions.h"

int main(){

	char input[MAX_LENGTH];

	cout << "Enter text (< " << MAX_LENGTH << " simbols): ";
	cin.getline(input, MAX_LENGTH);

	reverse(input);

	return 0;
}