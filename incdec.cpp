#include <iostream>
using namespace std;

int main()
{
	int a, b=0, c=0;

	a = b++ + c++;
	cout << a << ", " << b << ", " << c << "\n";

	a = ++b + c++;
	cout << a << ", " << b << ", " << c << "\n";

	a = --b + c--;
	cout << a << ", " << b << ", " << c << "\n";

	return 0;
}