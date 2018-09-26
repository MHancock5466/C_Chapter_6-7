//Rock, Paper, Scissors
//Author: Mason Hancock
//Date: 09/26/2018
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	int replay = 1;
	srand(time(NULL));
	
	do {
		int userChoice;
		int computerChoice = rand() % 3 + 1;
		
		cout << "Choose one.\n1 - Rock\n2 - Paper\n3 - Scissors\nYour Choice: ";
		cin >> userChoice;
		cout << computerChoice;

	} while (replay == 1);

	system("pause");
	return 0;
}