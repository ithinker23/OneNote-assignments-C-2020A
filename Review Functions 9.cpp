/*#include <iostream>

using namespace std;

//finds digits for 3 digit numbers
void findDigits(int num, int &digit1, int &digit2, int &digit3) {

	if (num / 1000 == 0) {
		digit3 = num % 10;
		num /= 10;
		digit2 = num % 10;
		num /= 10;
		digit1 = num % 10;

	} else  {
		
		cout << "Number has too many digits" << endl;
	}
}


int main() {
	int num = 981, digit1 = 0, digit2 = 0, digit3 = 0;

	findDigits(num, digit1, digit2, digit3);

	cout << "Digit 1: " << digit1 << " Digit 2: " << digit2 << " Digit 3: " << digit3 << endl;
	return 0;
}*/