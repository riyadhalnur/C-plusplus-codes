#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter a number between 1 and 3: ";
	cin >> num;

	switch(num) {
	case 1:
		cout << "Tit for tat.\n";
		break;
	case 2:
		cout << "A fool and his money are soon parted.\n";
		break;
	case 3:
		cout << "Two minds are better than one.\n";
		break;
	default:
		cout << "You must choose a number between 1 and 3.\n";
	}

	return 0;
}