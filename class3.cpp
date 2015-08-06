#include <iostream>
using namespace std;

class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;

	int range();
};

int Vehicle::range() {
	return mpg * fuelcap;
}

int main()
{
	Vehicle minivan;
	Vehicle sportscar;
	int range1, range2;

	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	sportscar.passengers = 2;
	sportscar.fuelcap = 14;
	sportscar.mpg = 12;

	range1 = minivan.range();
	range2 = sportscar.range();

	cout << "The minivan can carry " << minivan.passengers << " with a range of " << range1 << "\n";
	cout << "The sportscar can carry " << sportscar.passengers << " with a range of " << range2 << "\n";

	return 0;
}