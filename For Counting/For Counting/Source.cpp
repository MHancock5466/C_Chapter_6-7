//For Loop Counting
//Author: Mason Hancock
//Date: 09/21/2018
#include <iostream>
#include <string>
using namespace std;

int main() {
	for (string o = "o"; o != "          o"; o = " " + o) {
		cout << o << endl;
	}

	for (int i = 1; i <= 1000; i++) {
		if (i % 1 == 0 && i % 2 == 0 && i % 3 == 0 && i <= 12)
			cout << i << endl;
	}

	system("pause");
	return 0;
}