/*	=============================================================================
 *	This file is for storing utility functions that don't fit anywere else.
 *
 *	Each function is preceded with a contract that describes it's purpose,
 *	inputs and outputs.
 *
 *	The functions should be prototyped in util.h
 *	
 *	===========================================================================*/

#include <iostream>
#include <limits>
using namespace std;

/* Int input validation
 * This function accepts two integers that form a range, accepts an input using
 * cin, and tests whether that input is an integer in that range. The function
 * will keep asking until an input is accepted.
 *
 * Important. The function does not prompt the user for input the first time.
 * You should prompt the user for input when you call the function;
 *
 *	Inputs
 *		int min		the minimum acceptable value
 *		int max		the maximum acceptable value
 *
 *	Outputs
 *		int value	an int value between the max and min
 */

int goodInt (int min, int max) {
	int value = 0;
	if (min >= max || max <= min) {
		cout << "Some one messed up and the range should be checked";
		return value;
	}
	cin >> value;
	while (min > value || max < value || cin.fail()) {
		if (cin.fail()) {
			cout << "Please enter an integer\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin >> value;
		}
		if (value < min || value > max) {
			cout << "Please enter a number between " << min;
			cout << " and " << max << '\n';
			cin >> value;
		}
	}
	return value;
}

#ifdef _WIN32
#include <stdlib.h>
void cls() {
	system("cls");
}
#endif
#ifdef __gnu_linux__
void cls() {
	cout <<"\033[H\033[2J";
	return;
}
#endif
