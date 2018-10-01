/*	=============================================================================
 *	Group 3 Assignment 1
 *	
 *	James Conroy
 *	John Kenny
 *
 ===========================================================================*/
#include <iostream>
#include <limits>
#include "stdafx.h"
#include "util.h"

using namespace std;

int main () {
	bool exit = false;
	int select;
	while (exit == false) {
		//clear the window
		cls();
		cout << "This is Group 3's Assignment 1\n";
		cout << "\t1 National Stadium Seating\n";
		cout << "\t2 Average Rain Fall\n";
		cout << "\t3 Magic Dates\n";
		cout << "\t4 Dollar Change\n";
		cout << "Enter 0 to exit\n\n";
		cout << "Enter your selection: ";
		select = goodInt( 0, 4);

		switch ( select ) {
			case 1:
				Nationals_Income_Calculator();
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
