/*
#include <iostream>

using namespace std;

int main() {


	//declare variable
	int numDozens;
	float dozenPrice, eggPrice, total;
	bool askAgain;

	//ask again if number is invalid
	do {

		askAgain = false;

		//ask for number of eggs
		cout << "Enter Number Of Dozens: ";
		cin >> numDozens;

		//calculate prices

		if (numDozens < 4 && numDozens >= 0)
			dozenPrice = 0.50;

		else if (numDozens < 6 && numDozens >= 4)
			dozenPrice = 0.45;

		else if (numDozens < 11 && numDozens >= 6)
			dozenPrice = 0.40;

		else if (numDozens >= 11)
			dozenPrice = 0.35;

		else {
			cout << "Invalid amount";
			askAgain = true;
		}

	} while (askAgain == true);

	eggPrice = dozenPrice / 12;
	total = dozenPrice * numDozens;

	//output results
	printf("your cost is %0.2f per dozen or %0.2f per egg. \n", dozenPrice, eggPrice);
	printf("Total: %0.2f \n", total);

	return 0;
}
*/