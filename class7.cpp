#include <iostream>
using namespace std;

class Vehicle {
	int passengers;
	int fuelcap;
	int mpg;
public:
	Vehicle(int p, int f, int m) {
		passengers = p;
		fuelcap = f;
		mpg = m;
	}

	int range() { return mpg * fuelcap;}

	int get_passengers() {return passengers;}
	int get_fuelcap() {return fuelcap;}
	int get_mpg() {return mpg;}
};

int main()
{
	Vehicle minivan(7, 16, 21);
	Vehicle sportscar(2, 14, 12);
	int range1, range2;

	range1 = minivan.range();
	range2 = sportscar.range();

	cout << "The minivan can carry " << minivan.get_passengers() << " with a range of " << range1 << "\n";
	cout << "The sportscar can carry " << sportscar.get_passengers() << " with a range of " << range2 << "\n";

	return 0;
}