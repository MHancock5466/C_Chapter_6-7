//Book Choice
//Author: Mason Hancock
//Date: 09/20/2018
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	int replay = 0;
	
	cout << "Welcome to my chamber of Library Information Services (Otherwise known as LIS)" << endl;
	
	do {
		int bookChoice = 0;
		int secretBook;
		int attempts = 0;		
	
		srand(time(NULL));
		secretBook = rand() % 50 + 1;

		cout << "\nThere is a single magic book on my shelf of 50 books.\nYou have two tries to find it.\nIf you do not, you shall perish." << endl;
	
		while(bookChoice != secretBook && attempts != 2) {
			cout << "\nChoose a book by its number: ";
			cin >> bookChoice;

			if (bookChoice < secretBook) {
				cout << "Nice try. You chose too low." << endl;
				attempts++;
			}
			else if (bookChoice > secretBook) {
				cout << "Almost. Your number was too high." << endl;
				attempts++;
			}
			else {
				cout << "Impressive. You shall live... for now." << endl;
				attempts = 2;
			}
		}
		cout << "\nWould you like to play again?\n1 - Yes\n2 - No\nYour Choice: ";
		cin >> replay;
		cout << endl;
	} while (replay != 2);
	
	system("pause");
	return 0;
}