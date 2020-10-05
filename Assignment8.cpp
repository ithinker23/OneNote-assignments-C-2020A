/*#include <iostream>

using namespace std;

int main() {

	//declare variables
	int initialNum, number, numberInital = 1, numberLimit = 200, iterations = 121;

	//check for numbers numberInital to numberLimit
	cout << "Amount of iterations:" << iterations << endl;

	for (int x = numberInital; x <= numberLimit; x++) {
		initialNum = x;
		number = x;

		//apply hailstone's equation to current number
		for (int i = 0; i < iterations; i++) {

			if (number % 2 == 0)
				number /= 2;
			else
				number = number * 3 + 1;

			
		}
		//checks to see if number hit limit
		if (number > 4)
			cout << initialNum << ": didnt reach pattern" << endl;

	}

	return 0;
}
*/