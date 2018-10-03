/*	=============================================================================
 *	This function asks the user to enter a date.
 *	The function then determines whether the month times the year is equal to the
 *	year. If it is then the date is magic, and the program tells the user. If the
 *	date is not magic the program tells the user that the date is not magic.
 *
 *	The date needs to be entered in numeric form, and the year should be two-digits
 *
 *	Example
 *	May 14, 1970 is magic. This is because 5 * 14 = 70
 *
 *	===========================================================================*/
#include <iostream>
#include "util.h"
using namespace std;

bool isMagic (int month, int day, int year) {
	int product = month * day;
	if (product == year) {
		return true;
	}
	return false;
}

void MagicDate () {
	bool exit = false;
	int month, day, year = 0;
	while (exit == false) {
		cls();
		cout << "\t\tMAGIC DATES\n" << "This function determines if a date is magic.\n";
		cout << "Please enter all dates in numeric form,";
		cout << " and only the last two digits of the year.\n";
		cout << "Please enter your month: ";
		month = goodIn(1, 12);
		cout << "Please enter the day: ";
		day = goodIn(1, 31);
		cout << "Please enter the year: ";
		year = goodIn(0, 99);

		if (isMagic(month, day, year) == true) {
			cout << "\nThat date is magic\n\n";
		} else {
			cout << "\nThat date is not magic\n\n";
		}

		exit = exitPrompt();
	}
	return;
}
