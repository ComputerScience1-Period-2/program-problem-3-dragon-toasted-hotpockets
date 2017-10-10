/*
TEAM DRAGON TOASTED HOTPOCKETS
Jacob Hemphill, Aidan Nico, Youssef Khalifa - 10/5/17 2nd

Assignment Name : Three digit ascend descend selection 

To be able to have a 3 digit number into the "system" and calculate A, B, and C
Special thanks to Toaster = Bathbomb for help in coding the statements and for help in general.
*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	// Variables
	int three_digit_number;
		// Asks the user to enter a three digit number
		cout << "enter a three digit number" << endl;
		cin >> three_digit_number; // takes in a 3 digit number from a a trust worthy user. 
		
		int x = three_digit_number; // sets x to that 3 digit number
		int c = x % 10; // mods x by 10 c stores the last digit.
		int b = (x / 10) % 10; 
		int a = x / 100;
		if (a < b && b < c) {
			cout << "Ascending . . . " << endl;
			}
		else if (a > b && b > c) {
			cout << "Descending . . .  " << endl;
			}
		else {
			cout << "Neither . . . " << endl;
		}

		pause(); // pauses to see the displayed text
}
