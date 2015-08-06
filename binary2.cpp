#include <iostream>
using namespace std;

void binary(long int u);

int main()
{
	int i = 1, t;

	for(t=0; t<8; t++)
	{
		binary(i);
		i = i << 1;
	}

	cout << "\n";

	for(t=0; t<8; t++)
	{
		i = i >> 1;
		binary(i);
	}

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