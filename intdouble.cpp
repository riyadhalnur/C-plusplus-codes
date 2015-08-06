/* 
	This program illustrates the difference
	between int and dobule floating points
*/

#include <iostream>
using namespace std;

int main()
{
	int ivar;
	double dvar;

	ivar = 100;
	dvar = 100.0;

	cout << "Original value of ivar " << ivar << "\n";
	cout << "Original value of dvar " << dvar << "\n";

	cout << "\n";

	ivar = ivar/3;
	dvar = dvar/3.0;

	cout << "ivar after division " << ivar << "\n";
	cout << "dvar after division " << dvar << "\n";

	return 0;
}