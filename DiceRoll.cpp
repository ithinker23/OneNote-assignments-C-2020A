/*#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{

	//initiate rand generator seed
	srand(time(NULL));

	//declare variables
	int dice1, dice2, diceTotal, maxRand = 6, minRand = 1, numberOfRolls = 10;

	//create values of dice and loop it "numberOfRolls" times
	for (int i = 0; i < numberOfRolls; i++) {
		dice1 = rand() % maxRand + minRand;
		dice2 = rand() % maxRand + minRand;
		diceTotal = dice1 + dice2;

		//display output using printf
		printf("%0d %5d = %0d \n", dice1, dice2, diceTotal);
	}

	return 0;
}
*/