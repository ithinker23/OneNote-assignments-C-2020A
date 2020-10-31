/*
#include <iostream>

using namespace std;

long double nFactLoop(unsigned int n) {
	long double nFact = 1;

	if (n < 0)
		cout << "Error: number is below 0" << endl;

	else {

		while (n > 0) {
			nFact *= n;
			n--;
		}
		return nFact;
	}
	
}

long double nFactRecurve(unsigned int n) {

	if (n <= 1) {
		return 1;
	}
	else {
		return n * nFactRecurve(n-1);
	}
}


int main() {

	for (int x = 0; x <= 20; x++) {
		cout << "Factorial of " << x << ": " << nFactLoop(x) << endl;
		cout << "Factorial of " << x << ": " << nFactRecurve(x) << endl;
	}
	return 0;
}*/