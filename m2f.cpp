/*
	Simple metres to feet converter
*/

#include <iostream>
using namespace std;

int main()
{
	double f;
	double m;

	cout << "Enter number of metre(s): ";
	cin >> m;

	f = m * 3.28;
	cout << m << " meter(s) is " << f << " feet";


	return 0;
}