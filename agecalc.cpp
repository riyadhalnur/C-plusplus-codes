/*
	Age Calculator
*/

#include <iostream>
using namespace std;

int main()
{
	int cyr;
	int byr;

	cout << "Enter current year: ";
	cin >> cyr;

	cout << "Enter birth year: ";
	cin >> byr;

	cout << "\n";
	cout << "Your age is " << cyr-byr << " years";

	return 0;
}