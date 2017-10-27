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
	
		cout << "enter a three digit number" << endl;
		cin >> three_digit_number;
		
		int x = three_digit_number; 
		int c = x % 10;
		int b = (x / 10) % 10;
		int a = x / 100;
		if (a < b && b < c) {
			cout << "This is Ascending order . . . " << endl;
			}
		else if (a > b && b > c) {
			cout << "This is Descending order . . .  " << endl;
			}
		else {
			cout << "This is Neither order . . . " << endl;
		}

		pause(); // pauses to see the displayed text
}
