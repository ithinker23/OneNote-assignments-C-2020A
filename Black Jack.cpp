#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>
#include <vector>

//changes sleep milliseconds to seconds
#define sleep(x) Sleep(1000 * (x))

using namespace std;

//global variables
int playerTotal, dealerTotal, playerBalance, bet, wins, losses, draws;
vector<int> playerCards, dealerCards, allCards;

//reset the deck
void resetDeck() {
	//reset deck
	allCards = { 1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10 };
	//allCards = { 3,3,3,3,3,3,5,5,5 };
}

//outputs statistics of current position in the game
void outputStats(string who) {

	if (who == "player") {
		cout << "Player's Cards: ";

		for (int card : playerCards) {
			cout << card << ", ";
		}

		cout << "Your Total: " << playerTotal << endl;
	}
	else {
		cout << "Dealer's Cards: ";

		for (int card : dealerCards) {
			cout << card << ", ";
		}

		cout << "Dealer's Total: " << dealerTotal << endl;
	}
}

//Total specified players cards
void totalCards(string who) {

	if (who == "player") {
		playerTotal = 0;
		for (int card : playerCards) {
			playerTotal += card;
		}
	}
	else {
		dealerTotal = 0;
		for (int card : dealerCards) {
			dealerTotal += card;
		}
	}
}


//draws random card from allCards[]
int drawCard(){
	if (allCards.size() > 0) {
		//pick a random card from array
		int cardIndex = rand() % allCards.size(), card = allCards[cardIndex];

		//return and erase the card
		allCards.erase(allCards.begin() + cardIndex);
		return card;
	}
	else {
		cout << "Deck has been emptied" << endl;
		return 0;
	}
}

//check if player's balance is zero
bool checkBroke() {

	//check if any balance is 0
	if (playerBalance == 0) {
		cout << "Player has no more money! stop gambling!" << endl;
		return true;
	}
	return false;

}
//check balance of specified player
bool checkFunds() {
	
	bool hasEnough;

	//determine who is getting checked
	int balance = playerBalance;

	//check balance of specified player
	if (balance >= bet) {
		hasEnough = true;
	}
	else {
		hasEnough = false;
		cout << "Player doesnt have enough funds to perform bet" << endl;
	}

	return hasEnough;
}

//found ace and asks to change to 1 or 11
void hasAce(int card, int cardIndex) {
	if (card == 1) {
		char answer;
		cout << "Do you want to change ace to 11 (Y/N): ";
		cin >> answer;

		if (answer == 'Y' || answer == 'y') {

			playerCards.erase(playerCards.begin() + cardIndex);
			playerCards.resize(playerCards.size() + 1);
			playerCards[playerCards.size() - 1] = 11;

		}
	}
	else {
		char answer;
		cout << "Do you want to change ace back to 1 (Y/N): ";
		cin >> answer;

		if (answer == 'Y' || answer == 'y') {

			playerCards.erase(playerCards.begin() + cardIndex);
			playerCards.resize(playerCards.size() + 1);
			playerCards[playerCards.size() - 1] = 1;

		}
	}

	//re-total the cards of player
	totalCards("player");

	//output Player's stats
	outputStats("player");
}

//checks for Aces then asks to change or not
void checkForAce(string who) {
	if (who == "player") {
		int cardIndex = 0;
		for (int card : playerCards) {
			if (card == 1 || card == 11) {
				hasAce(card, cardIndex);
				break;
			}
			cardIndex++;
		}
	}
}

//add card to specified players array of cards
void addToCards(int card, string who) {
	if (who == "player") {
		playerCards.resize(playerCards.size() + 1);
		playerCards[playerCards.size() - 1] = card;
	}
	else {
		dealerCards.resize(dealerCards.size() + 1);
		dealerCards[dealerCards.size() - 1] = card;
	}

}

//loading animation
void loadingAnim(int time) {

	//clear console
	system("CLS");

	//drawing anim
	int animState = 0;

	for (int x = 0; x < time; x++) {

		if (animState == 0) {
			cout << "/ DRAWING CARD /";
			animState = 1;
			Sleep(100);
			system("CLS");
		}
		else if (animState == 1) {
			cout << "- DRAWING CARD -";
			animState = 2;
			Sleep(100);
			system("CLS");
		}
		else if (animState == 2) {
			cout << "\\ DRAWING CARD \\";
			animState = 3;
			Sleep(100);
			system("CLS");
		}
		else if (animState == 3) {
			cout << "| DRAWING CARD |";
			animState = 0;
			Sleep(100);
			system("CLS");
		}

	}

	//clear console
	system("CLS");

}

//outputs cards and gives total of cards
int giveCards(int amount, int &total, string who) {

	const int minRand = 1, maxRand = 10;
	int card;

		for (int x = 0; x < amount; x++) {

			//play loading animation
			loadingAnim(10);

			//draw random card from 1 - 10
			card = drawCard();

			//add card to array
			addToCards(card, who);

			//re-total the cards
			totalCards(who);

			//output Player's stats
			outputStats(who);

			//check for ace
			checkForAce(who);

			//wait a bit before starting loading anim
			Sleep(1500);

		}
		return card;
}

//removes bet amount from balance
void betMoney() {

	do {

		//enter bet amount
		cout << "Enter Bet Amount: ";
		cin >> bet;

	} while (checkFunds() == false || bet <= 0);

	//remove bet from player balance
	playerBalance -= bet;

}

//sets inital balance
void setBalance(int amount) {

	//initialize balances
	do {
		cout << "Enter Starting Amount: ";
		cin >> playerBalance;
	} while (playerBalance <= 0);

}

//outputs wins, losses, draws
void checkWin() {

	//check for draw
	if (playerTotal == dealerTotal || (playerTotal > 21 && dealerTotal > 21)) {
		playerBalance += bet;
		draws++;

		cout << "Player and Dealer Tie!" << endl;
	}
	//check for Player bust
	else if (playerTotal > 21) {
		losses++;

		cout << "Player Bust, Dealer wins!" << endl;
	}

	//check if Player got 21
	else if (playerTotal == 21) {
		playerBalance += 2 * bet;
		wins++;

		cout << "Player hit 21, Player wins!" << endl;
	}

	//check for Dealer bust
	else if (dealerTotal > 21) {
		playerBalance += 2 * bet;
		wins++;

		cout << "Dealer busts, Player wins!" << endl;
	}

	//check whos total is higher
	else if(playerTotal > dealerTotal){
			playerBalance += 2 * bet;
			wins++;
		
			cout << "Player's count is higher, Player wins!" << endl;
	}
	else
	{
			losses++;

			cout << "Dealer's count is higher, Dealer wins!" << endl;
	}

	//output balances and w/d/l ratio
	cout << endl;
	cout << "Player's Balance: " << playerBalance << endl;
	cout << "Wins: " << wins << ", Draws: " << draws << ", Losses: " << losses << endl << endl;
}

//initialize Game
void startGame() {

	//seed random generator
	srand(time(NULL));

	//set card arrays to zero
	playerCards = dealerCards = {};

	//input bet amount for player
	betMoney();

	//reset deck
	resetDeck();

	//give cards to player
	giveCards(1, playerTotal, "player");

	giveCards(1, playerTotal, "player");
}

//initiates Dealer's Turn
void dealerTurn() {

	//Dealer TURN
	if (playerTotal < 21) {
		do {
			if (giveCards(1, dealerTotal, "dealer") == 0)
				break;

		} while (dealerTotal <= 16);
	outputStats("player");
	}
	cout << endl;
}

//inititates players turn
void playerTurn() {
	do {
		char giveCard;

		cout << "Do you want another card? Y/N: ";
		cin >> giveCard;

		//check if player wants another card
		if (giveCard == 'N' || giveCard == 'n') {
			cout << endl;
			break;
		}

		//give card to player and add to total
		if (giveCards(1, playerTotal, "player") == 0)
			break;

	} while (playerTotal < 21);
}

//perform split
void split() {
	if (playerCards[0] == playerCards[1]) {

		char answer;
		cout << "do you want to split? Y/N: ";
		cin >> answer;

		if (answer == 'Y' || answer == 'y') {

			//store a card
			int sameCard = playerCards[0];

			//PLAYERS TURN
			playerTurn();

			//DEALERS TURN
			dealerTurn();

			//Check who won the round
			checkWin();

			//reset to deck 2
			playerCards = { sameCard };

			//reset dealer's deck
			dealerCards = {};

			//input bet amount for player
			betMoney();

			//reset the deck
			resetDeck();

		}
	}
}

//play the game
void play() {

	char playAgain;

	do {
		//reset and initialize game
		startGame();

		//check and perform split
		split();

		//PLAYERS TURN
		playerTurn();

		//DEALERS TURN
		dealerTurn();

		//Check who won the round
		checkWin();
		
		cout << "Do you want to play again? Y/N: ";
		cin >> playAgain;

	} while ((playAgain == 'Y' || playAgain == 'y') && checkBroke() == false);

}


int main() {

	//initialize balance
	setBalance(100);

	//play game
	play();

	return 0;
}

