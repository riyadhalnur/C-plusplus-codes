#include <iostream>
using namespace std;

class Fact {
private:
	int n;
public:
	void set(int i);
	int CalcFact();
	void print();
};

void Fact::set(int i) {
	n = i;
}

int Fact::CalcFact() {
	int r, fact=1;

	if(n == 0 || n == 1) {
		fact = 1;
	}
	else {
		for(r=1; r <= n; r++) {
			fact = fact * r;
		}
	}

	return fact;
}

void Fact::print() {
	cout << "Factorial of " << n << " is: " << CalcFact();
}

int main() {
	Fact num1;
	num1.set(5);
	num1.print();

	return 0;
}
