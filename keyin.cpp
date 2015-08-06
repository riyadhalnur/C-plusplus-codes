/*
	keyin.cpp
	Keyboard input for simple operations in C++
*/

#include <iostream>

using namespace std;

int main()
{
	int length, width;
	
	cout << "Enter length: ";
	cin >> length;
	
	cout << "Enter width: ";
	cin >> width;
	
	cout << "The area is " << length * width;
	
	return 0;
}