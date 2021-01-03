#include <iostream>
#include <vector>
#include <string>

using namespace std;

void sort(vector<int> &numbers) {
	vector<int> newNumbers;
	int index = 0;
	for (int number : numbers) {

		if (number % 2 == 0) {
			newNumbers.resize(newNumbers.size() + 1); // increase array by 1
			newNumbers[newNumbers.size() - 1] = number; // add even number to the end
		}

		index++;
	}

	index = 0;
	for (int number : numbers) {



		if (number % 2 == 1) {
			newNumbers.resize(newNumbers.size() + 1); // increase array by 1
			newNumbers[newNumbers.size() - 1] = number; // add odd number to the end
		}

		index++;
	}
	numbers = newNumbers;
}

int main() {
	vector<int> numbers = {3,4,3,4,3,4,3,4,3,4,4,3,4,3};
	
	sort(numbers);

	cout << "newArray:";
	for (int number : numbers) {
		cout << number << ", ";
		

	}
	cout << endl;
	return 0;
}

