/*#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int TotalCards(int pulledCard, int Total) {

	Total += pulledCard;

	return Total;
}

int drawCard(int numCards) {

	int pulledCard = 0, score = 0, replay;
	const int minRand = 1, maxRand = 13;

	for (int i = 0; i < numCards; i++) {
		pulledCard = rand() % maxRand + minRand;
		//score += pulledCard;
		;

		cout << pulledCard << " ";
	}
	int Total = 0;

	return TotalCards(pulledCard, Total);
}



int main() {

	//seed random number generator
	srand(time(NULL));

	//declare 
	int numCards, score1, score2, wins1 = 0, wins2 = 0, draws = 0, targetScore = 21;
	char replay;
	
	do {
		//ask for information
		cout << "How many cards do you want: ";
		cin >> numCards;

		//draw cards for you
		cout << "You: ";
		score1 = drawCard(numCards);
		cout << endl;

		//draw cards for computer
		cout << "computer: ";
		score2 = drawCard(numCards);
		cout << endl;

		//output results
		cout << "You have " << score1 << " and the computer has " << score2;

		if (score1 > targetScore && score2 <= targetScore) {
			cout << " so the computer wins!" << endl;
			wins2++;
		}
		else if (score1 <= targetScore && score2 > targetScore) {
			cout << " so you win!" << endl;
			wins1++;
		}
		else {
			cout << " you draw!" << endl;
			draws++;
		}

		//ask for replay
		cout << "Do you want to play again? (Y/N): ";
		cin >> replay;

	} while (replay == 'Y' || replay == 'y');

	//output wins
	cout << "Your wins: " << wins1 << endl;
	cout << "Computer's wins: " << wins2 << endl;
	cout << "Draws: " << draws << endl;

	return 0;
}
*/
