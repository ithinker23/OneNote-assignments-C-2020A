/*Guessing Game program */
/*
#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	
	// Generate secret number
	int maxRand, minRand, secret, replayGame;
	do {
	srand(time(NULL));

	cout << "Set Minimum for secret number: ";
	cin >> minRand;
	cout << "Set Maximum for secret number: ";
	cin >> maxRand;

	secret = rand() % maxRand + minRand;

	// Have user guess secret number
	const int GiveUpValue = 0;
	int NumGuesses = 0;
	int Guess;

	//start loop for guessing
	cout << "--Guessing Game!--\n";
	do {
		do {
			//ask for guess
			cout << "Enter guess (" << GiveUpValue << " to give up):";
			cin >> Guess;

			if (!(Guess >= minRand && Guess <= maxRand))
				cout << "Number is not in the range specified" << endl;

		} while (!(Guess >= minRand && Guess <= maxRand));

		//check if guess is lower, higher or equal to the secret number
		if (Guess != GiveUpValue) {
			if (Guess == secret)
				cout << "You’ve got it!\n";
			else if (Guess < secret)
				cout << "Too low! Try again!\n";
			else
				cout << "Too high! Try again!\n";

			//add to number of guesses
			NumGuesses++;
		}
	} while ((Guess != GiveUpValue) && (Guess != secret));

	//output results
	if (Guess == GiveUpValue)
		cout << "You gave up after " << NumGuesses << " guesses.\n";
	else
		cout << "It took you " << NumGuesses << " guesses.\n";

	cout << "Do you want to replay? (1 for yes, 0 for no): ";
	cin >> replayGame;

	} while(replayGame == 1);

	return 0;
}
*/