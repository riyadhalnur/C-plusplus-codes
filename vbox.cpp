#include <iostream>
using namespace std;

void box(int length, int width, int height);

int main()
{
	box(3, 4, 5);
	box(5, 6, 7);
	box(10, 20, 30);

	return 0;
}

void box(int length, int width, int height) {
	cout << "The volume of the box is - " << length*width*height << "\n";
}