#include <iostream>
using namespace std;

void binary(long int u);

int main()
{
	long int x;

	cout << "Enter a number: ";
	cin >> x;

	cout << "Number in binary: ";
	binary(x);
	cout << "Its complement: ";
	binary(~x);

	return 0;
}

void binary(long int u)
{
	int t;

	for(t=128; t>0; t = t/2)
		if(u & t) cout << "1 ";
		else cout << "0 ";

		cout << "\n";
}