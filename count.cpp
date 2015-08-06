#include <iostream>
using namespace std;

int main()
{
	char ch;
	int full = 0, comma = 0, count = 0;
	
	do {
		cout << "Enter characters ($ to stop): ";
		cin >> ch;
		count++;
	
		if(ch == '.')
			full++;
	
		if(ch == ',')
			comma++;
			
	} while(ch != '$');
	
	cout << "Total characters: " << count << "\n";
	cout << "Total fullstops: " << full << "\n";
	cout << "Total commas: " << comma << "\n";
	
	return 0;
}