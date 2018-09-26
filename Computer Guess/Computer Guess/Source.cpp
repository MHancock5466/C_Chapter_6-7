//Computer Guessing Game
//Author: Mason Hancock
//Date: 09/24/2018
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main() {
	int replay = 1;

	do {
		int userNumber;
		int computerNumber = 0;
		int upperLimit = 1000;
		int lowerLimit = 0;
		int attempts = 0;
	
		cout << "Choose a number between " << lowerLimit + 1 << " and " << upperLimit << "." << endl;
		cout << "The computer will attempt to guess your number.\nYour Choice: ";
		cin >> userNumber;

		while (userNumber > upperLimit || userNumber <= lowerLimit) {
			cout << "\nUser did not input a valid number. Please input a number between " << lowerLimit + 1 << " and " << upperLimit << ". ";
			cin >> userNumber;
		}

		while (computerNumber != userNumber) {
			srand(time(NULL));
			computerNumber = rand() % (upperLimit - lowerLimit) + (lowerLimit + 1);

			attempts++;
			cout << "\nComputer Guess: " << computerNumber << "\nComputer Attempts: " << attempts << endl;
			if (computerNumber > userNumber) {
				upperLimit = computerNumber;
				cout << "Too High." << endl;
			}
			else if (computerNumber < userNumber) {
				lowerLimit = computerNumber;
				cout << "Too Low." << endl;
			}
			sleep_for(seconds(1));
		}

		cout << "\nThe computer solved your random number!" << "\nIt only took it " << attempts << " tries." << endl;
		cout << "\nWould you like to play again?\n1 - Yes\n2 - No\nYour Choice: ";
		cin >> replay;
		cout << endl;

	} while (replay == 1);

	system("pause");
	return 0;
}