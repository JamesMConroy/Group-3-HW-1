/*	=============================================================================
 *	Group 3 Assignment 1
 *	
 *	James Conroy
 *
 ===========================================================================*/
#include <iostream>
#include "stdafx.h"
using namespace std;

int main () {
	bool exit = false;
	while (exit == false) {
		int select;
		//clear the window
		cout << "\033[H\033[2J";

		cout << "This is Group 3's Assignment 1\n";
		cout << "\t1 National Stadium Seating\n";
		cout << "\t2 Average Rain Fall\n";
		cout << "\t3 Magic Dates\n";
		cout << "\t4 Dollar Change\n";
		cout << "Enter 0 to exit\n\n";
		cout << "Enter your selection: ";
		cin >> select;
		switch (select) {
			case 1:
				StadiumSeating();
				break;
			case 2:
				AvgRainFall();
				break;
			case 3:
				MagicDate();
				break;
			case 4:
				DollarChange();
				break;
			case 0:
				exit = true;
				break;
			default:
				cout << "That input didn't work.\n";
				cout << "Please input the number by your selection";
				break;
		}
	}

	return 0;
}
