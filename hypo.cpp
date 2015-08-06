#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y, z;

	cout << "Enter value of x: ";
	cin >> x;

	cout << "Enter value of y: ";
	cin >> y;

	z = sqrt(x*x + y*y);

	cout << "Hypotenuse is: " << z;

	return 0;
}