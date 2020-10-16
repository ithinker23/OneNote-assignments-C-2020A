/*#include <iostream>
#include <cmath> 

using namespace std;

void DisplayWithDecimals(double Num, int NumDecimals) {

	int power = 1;

	for (int x = 0; x < NumDecimals; x++)
		power *= 10;

	Num *= power;

	Num = floor(Num);

	Num /= power;

	cout << Num << endl;

}

int main() {
	double num = 1.123456789;
	int numDecimals = 4;

	DisplayWithDecimals(num, numDecimals);

	return 0;
}*/