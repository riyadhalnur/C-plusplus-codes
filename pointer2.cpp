#include <iostream>
using namespace std;

int main()
{
	int *p, num;

	p = &num;

	*p = 100;
	cout << num << "\n";

	(*p)++;
	cout << num << "\n";

	(*p)--;
	cout << num << "\n";

	return 0;
}