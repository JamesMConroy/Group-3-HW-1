/*	=============================================================================
 *	This function calculates the income from ticket sales for a special game.
 *	The function gets ticket amounts from the user, and displays the total.
 *
 *	There are three different classes of seats, costing different amounts:
 *		Class A: $15
 *		Class B: $12
 *		Class C: $9
 *
 *	The Total is displayed in fixed point notation, with two decimal points of
 *	precision. The decimal point is always displayed.
 *
 *	All values are in American Dollars
 *	===========================================================================*/
#include <iostream>
#include <iomanip>
using namespace std;
const double Aprice = 15;
const double Bprice = 12;
const double Cprice = 9;

void StadiumSeating () {
	bool exit = false;
	while (exit == false) {
		int Asold, Bsold, Csold;
		char ch;
		cout << "\033[H \033[2J";
		cout << "This function calculates the income from ticket sales.\n";
		cout << "Please enter the number of class A seats sold: ";
		cin >> Asold;
		//cout << "\033[K \033[1;0H";
		cout << "Please enter the number of class B seats sold: ";
		cin >> Bsold;
		//cout << "\033[K \033[1;0H";
		cout << "Please enter the number of class C seats sold: ";
		cin >> Csold;


		//cout << "\033[0;0H \033[2J";
		int total = Asold * Aprice + Bsold * Bprice + Csold * Cprice;
		cout << "The total income is: " << total << "\n";
		//cin.get(ch) doesnt seel to work on linux maybe it does on windows
		cout << "Enter 0 if you want stay.\nEnter anything else to return to the main menu.";
		cin >> exit;
		//cin.clear();
	}
}
