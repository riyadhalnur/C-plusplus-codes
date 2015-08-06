#include <iostream>
using namespace std;

int main()
{
	double temp[8], sum, avg;
	int i;
	
	for(i=1; i<=7; i++) {
		cout << "Enter temperature (in Celcius) for day " << i << ": ";
		cin >> temp[i];
	}
	
	
	sum=0;
	for(i=1; i<=7; i++)
		sum += temp[i];
		avg = sum / 7;
		cout << "Average temperature: " << avg;

	return 0;
}