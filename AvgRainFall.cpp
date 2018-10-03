/*	=============================================================================
 *	This function calculates the average rainfall.
 *	The function asks the user to enter a location (city and state), the months
 *	the user wants the average for, and the rain fall (in inches) that fell each month
 *
 *	An example output is:
 *		"The average rainfall for June, July, and August was 3.72 in Washington DC."
 *	===========================================================================*/
#include <iostream>
#include <iomanip>
#include "util.h"
using namespace std;
const float MIN = 0.0;
const float MAX = 100.0;
const int MONTHS = 3;

float average ( float x, float y, float z) {
	return (x + y + z) / 3;
}

void AvgRainFall () {
	bool exit = false;
	while (exit == false) {
		cls();
		string months [MONTHS];
		string city;
		string state;
		float rainFall[MONTHS];
		float avg;

		cout << "\t\tAverage Rainfall\n";
		cout << "Please enter your city and state, in that order seperated by a space\n";
		cin >> city >> state;
		for (int i = 0; i < MONTHS; i++) {
			cout << "Please enter month # " << i+1 << " ";
			cin >> months[i];
		}
		cout << "Please enter the rainfall, in inches for: \n";
		for (int i = 0; i < MONTHS; i++ ) {
			cout << months[i] << ":\t";
			rainFall[i] = goodIn ( MIN, MAX);
		}
		avg = average ( rainFall[0], rainFall[1], rainFall[2]);

		cout << "The average rainfall for";
		for (int i = 0; i < MONTHS; i++) {
			if (i < MONTHS -1) {
				cout << " " << months[i] << ",";
			} else {
				cout << " and " << months[i];
			}
		}
		cout << showpoint << setprecision(2) << fixed;
		cout << " is " << avg << " in " << city << " " << state << "\n\n";
		exit = exitPrompt();
	}
}
