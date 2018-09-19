//Class Database
//Author: Mason Hancock
//Date: 09/19/2018
#include <iostream>
#include <string>
using namespace std;

int main() {
	int id;
	string result;

	cout << "Enter Your ID Number: ";
	cin >> id;
	switch (id) {
	case 102094:
		result = "Brosius, John";
		break;
	case 316338:
		result = "Dewilfond, Logan";
		break;
	case 138082:
		result = "Reis, Jack";
		break;
	case 313011:
		result = "Lang, Aaron";
		break;
	case 154824:
		result = "Graap, Kaden";
		break;
	case 137428:
		result = "Hancock, Mason";
		break;
	case 137220:
		result = "Gibson, Adam";
		break;
	case 145884:
		result = "France, Michael";
		break;
	case 306632:
		result = "Raker, Evan";
		break;
	case 154827:
		result = "Leuenhagen, Austin";
		break;
	case 134125:
		result = "Pham ho, Jimmy";
		break;
	case 318682:
		result = "Grady, Jacob";
		break;
	case 155980:
		result = "Lofgren, Chayton";
		break;
	case 137292:
		result = "Richards, Brandon";
		break;
	case 137112:
		result = "Burton, Adam";
		break;
	default:
		result = "Not Valid";
	}
	cout << result << endl;

	system("pause");
	return 0;
}