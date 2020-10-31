/*#include <iostream>
#include <vector>
#include <string>

using namespace std;

void addName(vector<string> &array) {
	cout << "Enter name to add: ";
	array.resize(array.size() + 1);
	cin >> array[array.size() - 1];
}

void deleteName(vector<string> &array) {
	cout << "Enter name to delete: ";
	string deleteName;
	cin >> deleteName;
	int index = 0;
	bool foundName = false;

	for (string name : array) {
		if (name.find(deleteName) != string::npos) {
			foundName = true;
			break;
		}
		index++;
	}
	if (foundName == true) {
		array.erase(array.begin() + index);
		cout << "name has been deleted" << endl;
	}
	else
		cout << "Not found" << endl;
}

void findName(vector<string>& array) {
	cout << "Enter name to find: ";
	string findName;
	cin >> findName;
	int index = 0;
	bool foundName = false;
	for (string name : array) {
		if (name.find(findName) != string::npos) {
			foundName = true;
			break;
		}
		index++;
	}

	if(foundName)
		cout << "Found in location: " << index << endl;
	else
		cout << "Did not find Name" << endl;

}

int main() {
	
	vector<string> Names;
	char choice;
	do {
		cout << "Choose action (Add/Delete/Find/Quit): ";
		cin >> choice;

		switch (choice) {

			case 'A':
				addName(Names);
				break;
			case 'D':
				deleteName(Names);
				break;
			case 'F':
				findName(Names);
				break;
			case 'Q':
				break;
			default:
				cout << "Enter a proper choice (A/D/F/Q)" << endl;

		}
	} while (choice != 'Q');

	return 0;
}*/