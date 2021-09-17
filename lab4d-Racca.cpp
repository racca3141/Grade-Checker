// Emerson Racca
// 09/15/2021
// Lab 4d: Grade Checker

/*
Write a function that returns a boolean true or false based on whether or not an integer is in the range 89 < x <=100.

The function prototype will look like this:

bool checkForA(int x);

1. In the main, tell the user what the app does.
2. Get the grade value of x from the user.
3. Pass the users integer to the function. Use logic to determine if the grade is an A or not. Return true or false.
4. In the main, use the function result to display the results to the user as follows:

You have earned an A.
or
You have not earned an A.
*/

#include<iostream>
using namespace std;

bool checkForA(int x);

int main(void) {
	int grade;

	cout << "Grade Checker\n\n";
	cout << "This app returns a boolean true or false based on whether or not an integer";
	cout << "\nis in the range 89 < x <= 100.\n";

	cout << "\nWhat is your grade? (0 - 100): ";
	cin >> grade;

	if (checkForA(grade))
		cout << "\nYou have earned an A.";
	else
		cout << "\nYou have not earned an A.";

	return(0);
}

bool checkForA(int x) {
	if (x > 89 and x <= 100)
		return true;
	else
		return false;
}
