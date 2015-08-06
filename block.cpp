#include <iostream>
using namespace std;

int main()
{
	int result, n, d;

	cout << "Enter number to be divided: ";
	cin >> n;

	cout << "Enter divisor: ";
	cin >> d;

	if (d != 0)
	{
		cout << "The divisor is not 0, so division is possible\n";
		result = n/d;
		cout << "The result of the division is " << result;
	}

	if (d == 0)
	{
		cout << "You have to enter a non-zero integer value";
	}

	return 0;
}