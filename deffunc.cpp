#include <iostream>
using namespace std;

void func(int x=20, int y=100);

int main()
{
	func(10, 20);
	func(23);
	func();

	return 0;
}

void func(int x, int y)
{
	cout << "x: " << x << ", y: " << y << "\n";
}