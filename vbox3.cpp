#include <iostream>
using namespace std;

double box(double length, double width, double height);

int main()
{
	double sum;

	sum = box(5.5, 6.5, 7.5) + box(1.2, 1.3, 1.4) + box(10.0, 10.0, 10.0);

	cout << "Sum of volumes: " << sum << "\n";
	cout << "Average volume: " << sum / 3.0 << "\n";

	return 0;
}

double box(double length, double width, double height) {
	return length*width*height;
}
