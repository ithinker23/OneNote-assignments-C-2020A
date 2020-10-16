/*#include<iostream>
#include<ctime>

using namespace std;


int GiveHint(int guess, int secret) {

	int correct = 0;

	if (guess > secret)
		cout << "Lower!" << endl;
	else if (guess < secret)
		cout << "Higher!" << endl;
	else {
		cout << "You got it!" << endl;
		correct = 1;
	}


	return correct;
}


int main() {

	int guess, secret, minRand = 1, maxRand = 10;

	srand(time(NULL));

	secret = rand() % maxRand + minRand;

	do {

		cout << "Enter guess:";
		cin >> guess;

	} while (GiveHint(guess, secret) != 1);

	return 0;
}*/