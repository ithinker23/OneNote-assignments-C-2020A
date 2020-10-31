/*
#include <iostream>

using namespace std;

char Code(char letter, int increment) {
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXWZ";
	char coded;

	if (increment > 26 || alphabet.find(letter) == string::npos) {
		cout << "Code increment is above 26 or letter is invalid";
		return letter;
	}
	else {
		coded = alphabet[alphabet.find(letter) + increment];
		return coded;
	}
}

int main() {

	cout << Code('A', 3);

	return 0;
}
*/