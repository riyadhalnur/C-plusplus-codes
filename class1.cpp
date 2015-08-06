#include <iostream>
using namespace std;

class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
};

int main()
{
	Vehicle minivan;
	int range;

	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	range = minivan.fuelcap * minivan.mpg;

	cout << "The minivan can carry " << minivan.passengers << " with a range of " << range << "\n";

	return 0;
}