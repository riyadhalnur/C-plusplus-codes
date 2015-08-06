#include <iostream>
using namespace std;

int main()
{
	char ch;

	for(int i=0; i<26; i++) 
	{
		ch = 'a' + i;
		cout << ch;

		ch = ch & 223;
		cout << ch << ' ';
	}

	cout << "\n";

	for(int j=0; j<26; j++)
	{
		ch = 'A' + j;
		cout << ch;

		ch = ch | 32;
		cout << ch << ' ';
	}
	
	return 0;
}