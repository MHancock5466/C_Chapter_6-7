//Grade Switch
//Author: Mason Hancock
//Date: 09/19/2018
#include <iostream>
#include <string>
using namespace std;

int main() {
	char grade; //Enter grade to determine student type
	string result;

	cout << "Enter Your Letter Grade: ";
	cin >> grade;
	grade = toupper(grade);

	switch (grade) {
	case 'A':
		result = "Advanced";
		break;
	case 'B':
		result = "Moderate";
		break;
	case 'C':
		result = "'Average'";
		break;
	case 'D':
	case 'F':
		result = "Good luck with that.";
		break;
	default:
		result = "Not Valid";
	} //End Switch
	cout << result << endl;

	system("pause");
	return 0;
} //End main