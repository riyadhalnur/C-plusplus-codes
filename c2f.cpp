#include <iostream>
using namespace std;

int main()
{
	double cel, fah;
	
	cout << "Enter the Celcius temperature: ";
	cin >> cel;
	
	fah = (cel * (9.0/5.0)) + 32;
	cout << "Temperature in Fahrenheit: " << fah << " degrees.\n";
	
	return 0;
	}