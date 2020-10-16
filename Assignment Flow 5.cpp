/*#include <iostream>

using namespace std;

//returns all factors of a number including 1 and itself
int findFactors(int number) {

	//declare variables, and set to one because of the factor with itself
	int numFactors = 1;

	//find factors of number
	for (int i = 1; i < number / 2; i++) {
		
		if (number % i == 0) {
			numFactors++;
		}

	}
	return numFactors;
}


int main() {

	//declare variables
	int number;

	//ask for positive integer
	do {

		cout << "Enter Positive Integer: ";
		cin >> number;

	} while (number < 0);

	if (findFactors(number) > 2) {
		cout << "not prime" << endl;

	}
	else {
		cout << "prime" << endl;

	}

	return 0;
}*/