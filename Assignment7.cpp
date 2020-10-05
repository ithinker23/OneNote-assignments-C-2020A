/*#include <iostream>

using namespace std;

int main() {

	//declare variables
	const int sentinel = -1;
	int gradeNum;
	float gradePercent, gradeAvg, gradeTot = 0;

	//gather information
	cout << "Enter number of grades: ";
	cin >> gradeNum;

	//calculate avg and total
	for (int i = 0; i < gradeNum; i++) {

		//repeat until grade is valid
		do {

			cout << "Enter grade percentage: ";
			cin >> gradePercent;

			if ((gradePercent < 0 || gradePercent > 100) && gradePercent != sentinel) {
				cout << gradePercent << " is not an acceptible percentage" << endl;

			}
		} while (!(gradePercent >= 0 && gradePercent <= 100) && gradePercent != sentinel);

		if (gradePercent == sentinel)
			break;

		gradeTot += gradePercent;
	}

	gradeAvg = gradeTot / gradeNum;

	//output results:
	printf("The total is: %0.2f \n", gradeTot);
	printf("The average is: %0.2f \n", gradeAvg);

	return 0;
}*/