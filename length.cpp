#include <iostream>
using namespace std;

int main()
{
	int len;

	cout << "Enter length (1 to 79): ";
	cin >> len;

	while(len > 0 && len < 80) {
		cout << '.';
		len--;
	}

	return 0;
}