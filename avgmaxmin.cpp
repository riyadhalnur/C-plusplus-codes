#include <iostream>
using namespace std;

int main()
{
	int i, avg, min, max;
	int num[10];

	num[0] = 20;
	num[1] = 67;
	num[2] = -75;
	num[3] = 85;
	num[4] = -15;
	num[5] = 34;
	num[6] = 50;
	num[7] = 23;
	num[8] = -12;
	num[9] = 43;

	avg = 0;
	for(i=0; i<10; i++)
		avg += num[i];

	avg /= 10;

	cout << "Average: " << avg << "\n";

	min = max = num[0];
	for(i=0; i<10; i++) {
		if(num[i] < min) min = num[i];
		if(num[i] > max) max = num[i];
	}

	cout << "Minimum Value: " << min << "\n";
	cout << "Maximum Value: " << max << "\n";

	return 0;
}