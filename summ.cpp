#include <iostream>
using namespace std;

int summation(int num[], int n);

int main()
{
	int val[] = {2,3,4,5,6};
	int result;

	result = summation(val, 5);

	cout << "Summation: " << result << "\n";

	return 0;
}

int summation(int num[], int n) {
	register int i;
	register int sum = 0;

	for(i=0; i < n; i++)
		sum = sum + num[i];

	return sum;
}