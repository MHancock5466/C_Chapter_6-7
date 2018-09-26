//Rock, Paper, Scissors
//Author: Mason Hancock
//Date: 09/26/2018
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

string convert(int choice) {
	string conversion = "";

	switch (choice) {
	case 1:
		conversion = "Rock";
		break;
	case 2: 
		conversion = "Paper";
		break;
	case 3:
		conversion = "Scissors";
		break;
	}

	return conversion;
}

int main() {
	int replay = 1;
	srand(time(NULL));
	
	do {
		int userChoice;
		int computerChoice = rand() % 3 + 1;
		
		cout << "Choose one:\n1 - Rock\n2 - Paper\n3 - Scissors\nYour Choice: ";
		cin >> userChoice;
		cout << "\nThe Computer Chose " << convert(computerChoice) << endl;
		if (userChoice > computerChoice && userChoice != 1) {
			cout << convert(userChoice) << " beats " << convert(computerChoice) << endl;
			cout << "\nYou win" << endl;
		}
		else if (userChoice == 1 && computerChoice == 3) {
			cout << convert(userChoice) << " beats " << convert(computerChoice) << endl;
			cout << "\nYou win" << endl;
		}
		else if (userChoice == computerChoice) {
			cout << "You both chose " << convert(userChoice) << endl;
			cout << "\nYou tied" << endl;
		}
		else {
			cout << convert(computerChoice) << " beats " << convert(userChoice) << endl;
			cout << "\nYou lose" << endl;
		}

		cout << "\nWould you like to play again?\n1 - Yes\n2 - No\nYour Choice: ";
		cin >> replay;
		cout << endl;
	} while (replay == 1);

	system("pause");
	return 0;
}