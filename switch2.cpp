/*
	Simple Calculator
	A program to demonstrate the 'switch' function further
	Author: Riyadh Al Nur (verticalaxis.frih.net)
*/

#include <iostream> // header for I/O functions
#include <cstdlib> // header for standard library for maths functions
using namespace std; // use standard namespace

int main() // main program declaration
{
	double a, b; // declare the double variables
	char choice; // declare the choice variable

	for(;;) {
menu: // label for the operations menu
	do {
	cout << "Operation choice menu (q to quit):\n";
	cout << "1. Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cout << "5. Percentage\n";
	cout << "6. Power\n";
	cout << "Enter choice: ";
	cin >> choice;
	cout << "\n";
	} while(choice < '1' || choice > '6' && choice != 'q' && choice != '?'); // loops till numbers from 1-6 are typed in or 'q' or '?' is typed in

	// if user types in 'q', terminate(exit) program
	if(choice == 'q') break;
	// if user types in '?', show help
	if(choice == '?') {
		cout << "************ Help *******************\n";
		cout << "* Press q to quit program           *\n";
		cout << "* Press ? to access help            *\n";
		cout << "* Press 1-6 to choose an operation  *\n";
		cout << "*************************************";
		cout << "\n\n";
		goto menu; // display help and go back to menu
	}

	cout << "Enter value of a: "; // asks user to input a value for a
	cin >> a; // store input of a

	cout << "Enter value of b: "; // asks user to input a value for b
	cin >> b; // store input of b

	switch(choice){ // switch statement initialisation
	case '1': // if 1 is typed in
		cout << "The result of a + b: " << (a + b) << "\n"; // do addition
		break;
	case '2': // if 2 is typed in
		cout << "The result of a - b: " << (a - b) << "\n"; // do subtraction
		break;
	case '3': // if 3 is typed in
		cout << "The result of a * b: " << (a * b) << "\n"; // do multiplication
		break;
	case '4': // if 4 is typed in
		if(b) cout << "The result of a / b: " << (a / b ) << "\n"; // do division; checks if 0 is typed in as the denominator
		else cout << "The following division cannot to carried out.\n"; // if 0 is typed in, this message is shown
		break;
	case '5': // if 5 is typed in
		cout << "a is " << ((a/b)*100) << "% of b\n"; // show how much of a is in b as a percentage
		break;
	case '6': // if 6 is typed in
		cout << "a^b is: " << pow(a, b) << "\n"; // a^b
		break;
	} // end switch statement

	cout << "\n";
}
	return 0; // end program
}