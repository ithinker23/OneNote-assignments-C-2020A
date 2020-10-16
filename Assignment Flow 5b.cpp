/*#include <iostream>

using namespace std;

//returns all factors of a number including 1 and itself
int findFactors(int number) {

	//declare variables, and set to one because of the factor with itself
	int numFactors = 1;

	//find factors of number
	cout << "Factors for " << number << ": ";

	for (int i = 1; i <= number / 2; i++) {

		if (number % i == 0) {
			numFactors++;
			cout << i << ", ";
		}
	}
	cout << number << endl;
	return numFactors;

}

int findPrimes(int startNum, int endNum) {

	//declare variables
	int numPrimes = 0;

	//find number of primes
	for (int i = startNum; i <= endNum; i++) {

		if (findFactors(i) <= 2)
			numPrimes++;

	}
	return numPrimes;

}


int main() {

	//declare variables
	int startNum, endNum;

	//ask for positive integers
	do {

		cout << "Enter positive integer for starting number: ";
		cin >> startNum;

	} while (startNum < 0);
	do {

		cout << "Enter positive integer for ending number: ";
		cin >> endNum;

	} while (endNum < 0);

	
	cout << "Number of prime numbers: " << findPrimes(startNum, endNum) << endl;


	return 0;
}
*/