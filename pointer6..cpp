#include <iostream>
using namespace std;

int main()
{
	int *p[10];
	int var = 100;

	p[2] = &var;

	cout << "Value of var: " << var << "\n";
	cout << "Memory Address: " << p[2] << "\n";

	return 0;
}