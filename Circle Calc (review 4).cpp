/*#include <iostream>
#include <math.h>

using namespace std;

int main() {
	//required vars to solve circle
	double circRadius; 
	double circArea;
	double circCircumference;

	//input variables and type 0 for unknown variables
	cout << "-Circle Calculator-" << endl;
	cout << "if the value is unknown input 0" << endl;
	cout << "Enter Radius: ";
	cin >> circRadius;
	cout << endl;
	cout << "Enter Area: ";
	cin >> circArea;
	cout << endl;
	cout << "Enter Circumference: ";
	cin >> circCircumference;
	cout << endl;


	//calculate unknown variables

	//if only radius is known
	if (circRadius != 0 && circArea == 0 && circCircumference == 0)
	{
		circArea = (3.14) * ((circRadius) * (circRadius));
		circCircumference = 2 * (3.14) * (circRadius);

		cout << "Area: " << circArea << endl << "Circumference: " << circCircumference << endl << "Radius: " << circRadius << endl;
	}
	//if only Area is known
	else if (circRadius == 0 && circArea != 0 && circCircumference == 0) {

		circRadius = sqrt(circArea / 3.14);
		circCircumference = 2 * (3.14) * (circRadius);

		cout << "Area: " << circArea << endl << "Circumference: " << circCircumference << endl << "Radius: " << circRadius << endl;
	}
	//if only Circumference is known
	else if (circRadius == 0 && circArea == 0 && circCircumference != 0) {

		circRadius = circCircumference / 2 / 3.14;
		circArea = (3.14) * ((circRadius) * (circRadius));

		cout << "Area: " << circArea << endl << "Circumference: " << circCircumference << endl << "Radius: " << circRadius << endl;
	}


	// if only circumference is unknown
	else if (circRadius != 0 && circArea != 0 && circCircumference == 0) {

		circCircumference = 2 * (3.14) * (circRadius);

		cout << "Area: " << circArea << endl << "Circumference: " << circCircumference << endl << "Radius: " << circRadius << endl;
	}
	// if only circArea is unknown
	else if (circRadius != 0 && circArea == 0 && circCircumference != 0) {

		circArea = 2 * (3.14) * (circRadius);

		cout << "Area: " << circArea << endl << "Circumference: " << circCircumference << endl << "Radius: " << circRadius << endl;
	}
	// if only circRadius is unknown
	else if (circRadius == 0 && circArea != 0 && circCircumference != 0) {

		circRadius = circCircumference / 2 / 3.14;

		cout << "Area: " << circArea << endl << "Circumference: " << circCircumference << endl << "Radius: " << circRadius << endl;
	}


	//if all information is already known
	else if (circRadius != 0 && circArea != 0 && circCircumference != 0) {

		cout << "Circle is already solved!";
	}

	//if all information is unknown
	else { 

		cout << "Not enough information given!";

	}



	return 0;

}*/