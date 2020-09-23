/*#include <iostream>

using namespace std;

int main()
{
	int Value; // Value entered by user
	int NumberOfValues = 0; // Number of values entered so far
	int SumOfValues = 0; // Sum of values entered so far
	int valuesUnder70 = 0;
	double percentUnder70;
	const int Sentinel = 0; // Indicates end of values to be entered
	cout << "--Calculate Average Program--" << endl;
	cout << "Enter a value (" << Sentinel << " to quit): ";
	cin >> Value;
	while (Value != Sentinel) {
		NumberOfValues++;;
		SumOfValues = SumOfValues + Value;
		cout << "Enter a value (" << Sentinel << " to quit): ";
		cin >> Value;
		if (Value < 70)
			valuesUnder70++;
	}
	percentUnder70 = ((double)valuesUnder70 / (double)NumberOfValues) * 100;
	cout << "Percentage under 70 is " << percentUnder70 << "%" << endl;
	cout << "Average is " << (double(SumOfValues) / NumberOfValues) << endl;
	return(0);
}
*/