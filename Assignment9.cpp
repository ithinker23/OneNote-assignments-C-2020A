/*
#include <iostream>

using namespace std;

int main() {

	//declare variables
	double number, growthRate;
	int iterations;

	//gather information
	//cout << "Enter a number: ";
	//cin >> number;
	number = 0.5;

	cout << "Enter number of iterations: ";
	cin >> iterations;

	do {

		cout << "Enter growth rate: ";
		cin >> growthRate;

		if ((growthRate < 2 || growthRate > 4))
			cout << "growth rate needs to be between 2 - 4 inclusive" << endl;

	} while (!(growthRate >= 2 && growthRate <= 4));

	//do the equation
	for (int i = 0; i <= iterations; i++)
		number = growthRate * number * (1 - number);

	cout << "Final Number: " << number << endl;

	return 0;
}*/