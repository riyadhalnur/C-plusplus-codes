#include <iostream>
using namespace std;

class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;

	Vehicle(int p, int f, int m);

	int range();
};

Vehicle::Vehicle(int p, int f, int m) {
	passengers = p;
	fuelcap = f;
	mpg = m;
}

int Vehicle::range() {
	return mpg * fuelcap;
}

int main()
{
	Vehicle minivan(7, 16, 21);
	Vehicle sportscar(2, 14, 12);
	int range1, range2;

	range1 = minivan.range();
	range2 = sportscar.range();

	cout << "The minivan can carry " << minivan.passengers << " with a range of " << range1 << "\n";
	cout << "The sportscar can carry " << sportscar.passengers << " with a range of " << range2 << "\n";

	return 0;
}