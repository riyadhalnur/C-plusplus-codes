#include <iostream>
using namespace std;

int neg(int i);
double neg(double i);
long int neg(long int i);

int main()
{
	cout << "neg(-10) is: " << neg(-10) << "\n";
	cout << "neg(9L) is: " << neg(9L) << "\n";
	cout << "neg(12.45) is: " << neg(12.45) << "\n";

	return 0;
}

int neg(int i)
{
	return -i;
}

double neg(double i)
{
	return -i;
}

long int neg(long int i)
{
	return -i;
}