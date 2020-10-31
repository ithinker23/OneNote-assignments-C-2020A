/*
#include <iostream>
#include <string>

using namespace std;

void ExtractFirstWord(string &sentence, string &word) {
	if (sentence == "") {
		word = "";
	}
	else {
		word = sentence.substr(0, sentence.find(" "));
		sentence = sentence.substr(sentence.find(" ") + 1, sentence.length());
		sentence += " " + word;
	}
}

int main() {
	string S, W;
	cout << "Enter String: ";
	getline(cin, S);
	while (S != "") {
		ExtractFirstWord(S, W);
		cout << W << endl;
	}
}
*/