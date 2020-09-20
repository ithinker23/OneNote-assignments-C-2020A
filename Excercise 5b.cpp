/*
#include <iostream>

using namespace std;

int main() {

	int burgerCount, friesCount, sodaCount;
	double beforeTax, afterTax, taxedAmount, tenderedAmount, changeAmount;
	const double tax = 0.06, burgerPrice = 1.49, friesPrice = 0.89, sodaPrice = 0.99;

	//Data Collection
	cout << "Enter Amount Of Burgers: ";
	cin >> burgerCount;

	cout << "Enter Amount Of Fries: ";
	cin >> friesCount;

	cout << "Enter Amount Of Sodas: ";
	cin >> sodaCount;

	//Calculations

	beforeTax = (burgerCount * burgerPrice) + (friesCount * friesPrice) + (sodaCount * sodaPrice);
	taxedAmount = beforeTax * tax;
	afterTax = beforeTax * (1 + tax);

	//Display Data
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "Before Tax: " << beforeTax << endl;
	cout << "Tax: " << taxedAmount << endl;
	cout << "Grand Total: " << afterTax << endl;

	//Payment Details
	cout << "Enter Tendered Amount: ";
	cin >> tenderedAmount;

	changeAmount = tenderedAmount - afterTax;

	cout << "Change Amount: " << changeAmount;
	
	return 0;
}
*/