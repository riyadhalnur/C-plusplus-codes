#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	char ch;

	cout << "Enter a fullstop to stop.\n";

	do {
		cout << "Enter characters: ";
		cin >> ch;
		if(ch >= 'a' && ch <= 'z') {
			ch -= (char) 32;
			i++;
			cout << "Case Change: " << ch;
			cout << "\n";
		}
		else if(ch >= 'A' && ch <= 'Z') {
			ch += (char) 32;
			i++;
			cout << "Case change: " << ch;
			cout << "\n";
		}
	} while(ch != '.');

	cout << "Total case changes: " << i;

	return 0;
}