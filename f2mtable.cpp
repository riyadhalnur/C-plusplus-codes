#include <iostream>
using namespace std;

int main()
{
	double f;
	double m;
	int count;

	count = 0;

	cout << "Feet to Metre conversion table\n";
	cout << "Copyright (c) 2009 Riyadh Al Nur\n\n";

	for(f=1.0; f<=100; f++) {
		m = f/3.28;
		cout << f << " feet is " << m << " meters.\n";
		count++;

		if(count == 25)
		{
			cout << "\n";
			count = 0;
		}
	}

	return 0;
}