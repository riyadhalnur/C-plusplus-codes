#include <iostream>
using namespace std;

class circ {
private:
	float r;
	float pi;
public:
	void set(int i);
	float area();
	void print();
};

void circ::set(int i) {
	r = i;
	pi = 3.1416;
}

float circ::area() {
	float result;

	result = pi * r * r;
	
	return result;
}

void circ::print() {
	cout << "Area of circle is: " << area() << "\n";
}

int main() {
	circ c1;
	c1.set(2);
	c1.print();

	return 0;
}