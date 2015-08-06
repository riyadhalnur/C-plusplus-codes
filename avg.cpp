#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
	int i;
	double avg, val;

	avg = 0.0;

	for(i=0; i<3; i++)
	{
		cout << "Enter a value: ";
		cin >> val;

		avg = avg + abs(val);
	}
	avg = avg / 3;

	cout << "Average of absolute values: " << avg;

	return 0;
}