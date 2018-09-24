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
	int userNumber;
	int computerNumber = 0;
	int upperLimit = 100;
	int lowerLimit = 0;
	int attempts = 0;

	cout << "Choose a number between " << lowerLimit + 1 << " and " << upperLimit << "." << endl;
	cout << "The computer will attempt to guess your number.\nYour Choice: ";
	cin >> userNumber;

	while (computerNumber != userNumber) {
		srand(time(NULL));
		computerNumber = rand() % (upperLimit - lowerLimit) + (lowerLimit + 1);

		attempts++;
		cout << "\nComputer Guess: " << computerNumber << "\nComputer Attempts: " << attempts << endl;
		cout << endl;
		if (computerNumber > userNumber)
			upperLimit = computerNumber;
		else if (computerNumber < userNumber)
			lowerLimit = computerNumber;
		sleep_for(seconds(1));
	}

	cout << "The computer solved your random number!" << "\nIt only took it " << attempts << " tries." << endl;
	cout << endl;

	system("pause");
	return 0;
}