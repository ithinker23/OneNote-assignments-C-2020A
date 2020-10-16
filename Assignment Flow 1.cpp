/*
#include <iostream>

using namespace std;

int main() {

	//initialize variables
	double height, width, length, wieght, volume;
	const float maxVolume = 0.1, maxWeight = 27;

	//enter parcel information
	cout << "Enter height of parcel: ";
	cin >> height;
	cout << "Enter width of parcel: ";
	cin >> width;
	cout << "Enter length of parcel: ";
	cin >> length;
	cout << "Enter wieght of parcel: ";
	cin >> wieght;

	//calculate volume
	volume = height * width * length;

	//output results
	if (volume >= maxVolume && wieght >= maxWeight)
	{
		cout << "Too Heavy And Too Large" << endl;
	}
	else if (volume >= maxVolume && wieght <= maxWeight) {

		cout << "Too Large" << endl;
	}
	else if (volume <= maxVolume && wieght >= maxWeight) {

		cout << "Too Heavy" << endl;
	}
	else {

		cout << "Parcel has met the requirements" << endl;
	}

	return 0;
}
*/