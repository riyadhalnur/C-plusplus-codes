#include <iostream>
using namespace std;

int main()
{
	int a, b;
	double div;
	cout << "Enter value of a: ";
	cin >> a;

	cout << "Enter value of b: ";
	cin >> b;

	if(b){
		cout << "a /b is equal to " << (a / b);
	}
	else {
		cout << "a / b is not possible";
	}
	return 0;
}