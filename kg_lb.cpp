#include <iostream>
using namespace std;

int main()
{
	double kilo;
	double lb;
	int counter;

	counter = 0;
	for(kilo = 1.0; kilo <= 100.0; kilo++)
	{
		lb = kilo * 2.204622621848776;
		cout << kilo << "kg is equal to " << lb << "lbs\n";
		counter++;

		if(counter == 25)
		{
			cout << "\n";
			counter = 0;
		}
	}
	return 0;
}
