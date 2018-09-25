//Page 203 Currency Exchange
//Author: Mason Hancock
//Date: 09/25/2018
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double exchange(int currencyType, double moneyToExchange) {
	double canadianRate = 0.9813;
	double euroRate = 0.757;
	double indianRate = 52.53;
	double japaneseRate = 80.92;
	double mexicanRate = 13.1544;
	double southAfricanRate = 7.7522;
	double britishRate = .6178;
	double moneyBack = 0;

	switch (currencyType) {
	case 1:
		moneyBack = canadianRate * moneyToExchange;
		break;
	case 2:
		moneyBack = euroRate * moneyToExchange;
		break;
	case 3:
		moneyBack = indianRate * moneyToExchange;
		break;
	case 4:
		moneyBack = japaneseRate * moneyToExchange;
		break;
	case 5:
		moneyBack = mexicanRate * moneyToExchange;
		break;
	case 6:
		moneyBack = southAfricanRate * moneyToExchange;
		break;
	case 7:
		moneyBack = britishRate * moneyToExchange;
		break;
	default:
		moneyBack = 0;
	}
	return moneyBack;
}

int main() {
	int currencyType;
	double moneyToExchange;

	cout << "What type of currency do you wish to exchange for?\n1 - Canadian Dollar\n2 - Euro\n3 - Indian Rupee\n4 - Japanese Yen";
	cout << "\n5 - Mexican Peso\n6 - South African Rand\n7 - British Pound\nYour Input: ";
	cin >> currencyType;
	cout << "\nHow many US Dollars are you converting?\n$";
	cin >> moneyToExchange;

	cout << fixed << setprecision(2) << "\nYour money back will be " << exchange(currencyType, moneyToExchange) << endl;

	system("pause");
	return 0;
}