#include <iostream>
using namespace std;

void oddeven(int x);
void negative(int x);

int main()
{
	int i;
	
	cout << "Enter a number: ";
	cin >> i;
	oddeven(i);
	negative(i);
}

void oddeven(int x)
{
	if(x % 2)
		cout << x << " is odd\n";
	else
		cout << x << " is even\n";
}

void negative(int x)
{
	if(x < 0)
		cout << x << " is negative\n";
	else
		cout << x << " is positive\n";
}