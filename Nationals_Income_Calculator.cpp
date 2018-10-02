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

void Nationals_Income_Calculator()
{
	double Total_Income;
	double Class_A, Class_B, Class_C, Class_A_Price, Class_B_Price, Class_C_Price, Max_Seats;

	//Creates the constants for the ticket pricing and the Maximum number of seats

	Class_A_Price = 15;
	Class_B_Price = 12;
	Class_C_Price = 9;
	Max_Seats = 41313;

	cout << "Nationals Income Calculator\n" << "There are a maximum of " << Max_Seats << " seats\n";
	cout << "How many Class A tickets were sold?\n";
	cin >> Class_A;
	//Validates the input is a positive number less than the set maximum 

	while (Class_A > Max_Seats || Class_A < 0 || cin.fail())
	{
		//check if it is a letter or an input failure
		if (cin.fail()) {
			cout << "That was not a number, please enter a number\n";
			//if it is a string this clears the failure input and ignores the next 1000 characters using a new line character
			cin.clear();
			cin.ignore(1000, '\n');
		} //Checks for positive number
		else if(Class_A<0){
			cout << "It's not possible to sell a negative number of seats. Please enter a positive number.\n";
		}
		else { //Checks to see  if the max number has been exceeded
			cout << "That's more than the max seats\nPlease try again\n";
		}
		cin >> Class_A;
	}
	//repeats for Class_B seats
	cout << "How many Class B tickets were sold?\n";
	cin >> Class_B;

	while (Class_B > Max_Seats || Class_B < 0 || cin.fail())
	{
		if (cin.fail()) {
			cout << "That was not a number, please enter a number\n";

			cin.clear();
			cin.ignore(1000, '\n');

		}
		else if (Class_B < 0) {
			cout << "It's not possible to sell a negative number of seats. Please enter a positive number.\n";
		}
		else {
			cout << "That's more than the max seats\nPlease try again\n";
		}
		cin >> Class_B;
	}
	//repeats for Class_C seats
	cout << "How many Class C tickets were sold?\n";
	cin >> Class_C;

	while (Class_C > Max_Seats || Class_C < 0 || cin.fail())
	{
		if (cin.fail()) {
			cout << "Those were letters, please enter a number\n";
			cin.clear();
			cin.ignore(1000, '\n');

		}
		else if (Class_C < 0) {
			cout << "It's not possible to sell a negative number of seats. Please enter a positive number.\n";
		}
		else {
			cout << "That's more than the max seats\nPlease try again\n";
		}
		cin >> Class_C;
	}
	//checks if the total seats sold are greater than the max seats
	if (Class_A + Class_B + Class_C > Max_Seats) {
		cout << "Too many tickets sold please start again";
	}
	//totals the income
	Total_Income = (Class_A*Class_A_Price) + (Class_B*Class_B_Price) + (Class_C*Class_C_Price);

	//Outputs the income
	cout << "\nTotal income = $";
	cout << showpoint << setprecision(2) << fixed << Total_Income << "\n\n\n\n\n";
	char pause;
	cin >> pause;
}
