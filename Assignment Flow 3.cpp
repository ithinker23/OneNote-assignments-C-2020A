/*
#include <iostream>

using namespace std;

int main() {

	//declare variables
	float hoursWorked, hourRate, grossWage, taxedWage;
	const float tax = 0.18;
	char exempt;

	//gather information
	cout << "Amount Of Hours Worked: ";
	cin >> hoursWorked;
	cout << "Hourly Rate: ";
	cin >> hourRate;

	//calculation
	if (hoursWorked > 40) {
		hoursWorked -= 40;
		grossWage = (hoursWorked * (hourRate * 1.5)) + (hourRate * 40);
	}
	else {
		grossWage = hoursWorked * hourRate;
	}
	

	//output results

	cout << "Exempt Current Employee? (Y for Yes, N for No): ";
	cin >> exempt;

	printf("Gross wages: %0.2f\n", grossWage);

	if (exempt == 'N' || exempt == 'n') {

		taxedWage = grossWage - (grossWage * tax);
		printf("Wage after deduction: %0.2f \n", taxedWage);
	}
	else {

		cout << "NO TAXES DEDUCTED" << endl;
	}

	return 0;
}
*/