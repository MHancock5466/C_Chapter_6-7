//Random Number For Loop
//Author: Mason Hancock
//Date: 09/25/2018
#include <iostream>
#include <string>
#include <time.h>
#include <chrono>
#include <thread>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

int main() {
	int number;
	for (int count = 0; count < 10; count++) {
		srand(time(NULL));
		number = rand() % 10 + 1;
		cout << number << endl;
		sleep_for(milliseconds(750));
	}

	system("pause");
	return 0;
}