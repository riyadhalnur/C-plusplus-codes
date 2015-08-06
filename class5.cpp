#include <iostream>
using namespace std;

class MyClass {
public:
	int x;

	MyClass(int i);
	~MyClass();
};

MyClass::MyClass(int i) {
	x = i;
}

MyClass::~MyClass() {
	cout << "Destructing object whose x value is " << x << "\n";
}

int main()
{
	MyClass t1(72);
	MyClass t2(100);

	cout << t1.x << ' ' << t2.x << "\n";

	return 0;
}