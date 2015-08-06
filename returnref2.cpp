#include <iostream>
using namespace std;

double &change_it(int i);
double val[] = {1.1, 2.2, 3.3, 4.4, 5.5};

int main()
{
	int i;

	cout << "Original Values: ";
	for(i=0; i<5; i++)
		cout << val[i] << ' ' << "\n";

	change_it(1) = -23.4;
	change_it(3) = 12.5;

	cout << "Altered Values: ";
	for(i=0; i<5; i++)
		cout << val[i] << ' ' << "\n";

	return 0;
}

double &change_it(int i)
{
	return val[i];
}