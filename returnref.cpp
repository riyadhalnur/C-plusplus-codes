#include <iostream>
using namespace std;

double &f();
double val = 100.0;

int main()
{
	double x;

	cout << f() << "\n";

	x = f();
	cout << x << "\n";

	f() = 99.1;
	cout << f() << "\n";

	return 0;
}

double &f()
{
	return val;
}