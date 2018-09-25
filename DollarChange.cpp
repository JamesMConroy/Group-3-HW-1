/*	=============================================================================
 *	This program asks the user for a number of coins, and calculates wheather those
 *	coins equal exactly one US Dollar. If the coins do add up to a dollar, the 
 *	program congradulates the user, otherwise the program tells the user if the 
 *	entered coins add up to more or less than a dollar, and by how much.
 *
 *	The program only asks for the amount of pennies, nickels, dimes, quarters,
 *	and half dollars.
 *
 *	===========================================================================*/
#include <iostream>
#include <iomanip>
using namespace std;

const int penni = 1;
const int nickl = 5;
const int dimes = 10;
const int quart = 25;
const int halfD = 50;
const int dollar = 100;

// This function takes the number of different coins and determins if they add up
// to a US greenback. If the coins do then the program returns 0 otherwise it
// returns the difference, in cents, between the two.
int isDollar (int nP, int nN, int nD, int nQ, int nH) {
	int total;
	nP = nP * penni;
	nN = nN * nickl;
	nD = nD * dimes;
	nQ = quart * nQ;
	nH = nH * halfD;
	total = nP + nN + nD + nQ + nH;
	total = total - dollar;
	return total;
}

void DollarChange () {
	bool exit = false;
	while (exit == false) {
		int x = 0;
		int nPenni, nNickle, nDimes, nQuart, nHalfD, difference = 0;
		cout << "\033[H\033[J";
		cout << "Let's play a game. \n";
		cout << "How many pennies do you have? ";
		cin >> nPenni;
		cout << "How many nickles do you have? ";
		cin >> nNickle;
		cout << "How many dimes do you have? ";
		cin >> nDimes;
		cout << "How many quarters do you have? ";
		cin >> nQuart;
		cout << "How many half dollars do you have? ";
		cin >> nHalfD;
		difference = isDollar (nPenni, nNickle, nDimes, nQuart, nHalfD);
		if (difference == 0) {
			cout << "Congradulations !!!\n";
			cout << "You have exactly one doll hair.\n";
		} else {
			cout << "You do not have exactly 1 dollar.\n";
			if (difference > 0) {
				cout << "you have more than a dollar.\n";
			} else if (difference < 0) {
				cout << "You have less than a dollar.\n";
			}
			cout << "You were off by " << difference << " cents.\n";
		}
		cout << "Enter 0 if you want to stay.\nEnter any other number to return to the main menu: ";
		cin >> x;
		if (x != 0) {
			exit = true;
		}
	}
}
