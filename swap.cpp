#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main()
{
	int i = 10, j = 20;

	cout << "Original Values: " << i << ' ' << j << "\n";

	swap(&i, &j);

	cout << "Swapped Values: " << i << ' ' << j << "\n";

	return 0;
}

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
