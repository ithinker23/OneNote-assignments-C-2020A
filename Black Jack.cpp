/*#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//global variables
int playerTotal, CPUTotal, playerBalance, CPUBalance, bet, wins, losses, draws;

//check balance of specified player
bool checkBalance(string who) {
	
	bool hasEnough;

	//determine who is getting checked
	int balance;
	if (who == "player")
		balance = playerBalance;
	else
		balance = CPUBalance;

	//check balance of specified player
	if (balance >= bet) {
		hasEnough = true;
	}
	else {
		hasEnough = false;
		cout << who + " doesnt have enough funds to perform bet" << endl;
	}

	return hasEnough;
}

//checks for Aces then asks to change or not
void checkForAce(int &card, string who){
	
	char answer;

	if (card == 1) {

		if (who == "player") {
			cout << "Do you want to change ace to 11? Y/N: ";
			cin >> answer;
		}
		else {
			if (rand() % 2 + 1 == 1)
				answer = 'Y';
			else
				answer = 'N';
		}

		if (answer == 'Y' || answer == 'y')
			card = 11;
		else
			card = 1;
	}

}

//outputs statistics of current position in the game
void outputStats(string who) {

	if (who == "player")
		cout << "Your Total: " << playerTotal << endl;
	else
		cout << "CPU Total: " << CPUTotal << endl;
}

//outputs cards and gives total of cards
void giveCards(int amount, int &total, string who) {

	const int minRand = 1, maxRand = 10;
	int card;

		cout << who + "'s Draw: ";

		for (int x = 0; x < amount; x++) {
			card = rand() % maxRand + minRand;
			checkForAce(card, who);
			total += card;
			cout << card << ", ";
		}

		//output Player's stats
		outputStats(who);

		cout << endl;
}

//removes bet amount from balance
void betMoney(int bet, string who) {
		if (who == "player")
			playerBalance -= bet;
		else
			CPUBalance -= bet;
}

//sets inital balance
void setBalance(int amount) {

	//initialize balances
	cout << "Enter Starting Amount: ";
	cin >> playerBalance;

	CPUBalance = playerBalance;

}

//outputs wins, losses, draws
void checkWin() {

	//check for draw
	if (playerTotal == CPUTotal || (playerTotal > 21 && CPUTotal > 21)) {
		playerBalance += bet;
			draws++;
	}

	//if not a draw check for win or loss
	else {

		//check if any player surpasses 21
		if (playerTotal > 21) {
			CPUBalance += 2 * bet;
			losses++;

		}
		else if (CPUTotal > 21) {
			playerBalance += 2 * bet;
			wins++;

		}

		//check if any player equal 21
		else if (playerTotal == 21) {
			playerBalance += 2 * bet;
			wins++;
		}
		else if (CPUTotal == 21) {
			CPUBalance += 2 * bet;
			losses++;

		}

		//check if player surpasses opponent
		else if (playerTotal > CPUTotal) {
			playerBalance += 2 * bet;
			wins++;

		}
		else {
			CPUBalance += 2 * bet;
			losses++;

		}
	}
	cout << "Player's Balance: " << playerBalance << ", CPU's Balance: " << CPUBalance << endl;
	cout << "Wins: " << wins << ", Draws: " << draws << ", Losses: " << losses << endl;
}

//initialize Game
void startGame() {
	//seed random generator
	srand(time(NULL));

	CPUTotal = playerTotal = 0;

	do {
	//enter bet amount
	cout << "Enter Bet Amount: ";
	cin >> bet;

	} while (checkBalance("player") == false || checkBalance("CPU") == false);
	
	//input bet amount for player
	betMoney(bet, "player");

	//input bet amount for CPU
	betMoney(bet, "CPU");
}

//play the game
void play() {

	char playAgain;

	do {
		//ask for starting info
		startGame();


		//PLAYERS TURN

		//give cards to player
		giveCards(2, playerTotal, "player");

		do {
			char giveCard;

			cout << "Do you want another card? Y/N: ";
			cin >> giveCard;

			//check if player wants another card
			if (giveCard == 'N' || giveCard == 'n')
				break;

			//give card to player and add to total
			giveCards(1, playerTotal, "player");

		} while (playerTotal < 21);



		//CPU TURN

		//give cards to CPU
		giveCards(2, CPUTotal, "CPU");

		do {
			//give random number
			int giveCPUCard = rand() % 2 + 1;

			//random chance to give a card to CPU
			if (giveCPUCard == 1)
				break;

			giveCards(1, CPUTotal, "CPU");



		} while (CPUTotal < 21);

		checkWin();

		//check if any balance is 0
		if (playerBalance == 0) {
			cout << "Player has no more money! CPU Wins!" << endl;
			break;
		}
		if (CPUBalance == 0) {
			cout << "CPU has no more money! Player Wins!" << endl;
			break;
		}

	cout << "Do you want to play again? Y/N: ";
	cin >> playAgain;

	} while (playAgain == 'Y' || playAgain == 'y');
}


int main() {

	//initialize balance
	setBalance(100);

	//play game
	play();

	return 0;
}
*/