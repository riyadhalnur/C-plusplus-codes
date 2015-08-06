/*
	Simple Celsius to Kelvin Temperature Converter
	Copyright (c) 2009 Riyadh Al Nur
*/

#include <iostream>
using namespace std;

int main()
{
	double c;
	double k;

	cout << "Celsius to Kelvin Temperature Converter\n\n";

	cout << "Enter Celsius Temperature: ";
	cin >> c;

	k = c + 273.15;
	cout << "Temperature in Kelvin: " << k;

	return 0;
}