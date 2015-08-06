#include <iostream>
using namespace std;

int main()
{
	char ch;
	int fullstop = 0;

	do {
		cout << "Enter a character ($ to stop): ";
		cin >> ch;
		if(ch == '.') fullstop++;
	} while(ch != '$');

	cout << "Total number of fullstops: " << fullstop;

	return 0;
}