#include <iostream>
using namespace std;

int box(int length, int width, int height);

int main()
{
	int answer;

	answer = box(10, 10, 10);
	cout << "The answer is: " << answer << "\n";

	return 0;
}

int box(int length, int width, int height) {
	return length*width*height;
}