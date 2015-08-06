#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Enter value of a: ";
	cin >> a;

	cout << "Enter value of b: ";
	cin >> b;

	cout << "\n";

	c = a-b;
	if (c < 0) cout << "c = " << c << ", c is less than a-b\n";
	if (c > 0) cout << "c = " << c << ", c is greater than a-b\n";
	if (c == 0) cout << "c = " << c << ", c is equal to a-b\n";
	cout << "\n";
	cout << "Copyright (c) 2009 Riyadh Al Nur. All rights reserved.";

	return 0;
}