#include <iostream>
using namespace std;

class Power {
	int base, exp;
public:
	Power() {base = 0; exp = 0;}
	Power(int b,int e) {base = b; exp = e;}
	
	int CalVal() {
		int total = 1;
		for(int i=1; i<=exp; i++) {
			total *= base;
		}
		return total;
	}
	void print() {
		cout << "BASE = " << base << endl;
		cout << "EXPONENTIAL = " << exp << endl;
	}
	void printCalVal() {
		cout << "RESULTS = " << CalVal() << endl;
	}
	Power operator*(Power ob) {
		Power tmp;
		tmp.exp = this->exp + ob.exp;
		tmp.base = this->base;
		return tmp;
	}
	Power operator/(Power ob) {
		Power tmp;
		tmp.exp = this->exp - ob.exp;
		tmp.base = this->base;
		return tmp;
	}
	Power operator=(Power ob) {
		this->base = ob.base;
		this->exp = ob.exp;
		return *this;
	}
	Power operator+(Power ob) {
		Power tmp,tmp1;
		int total1 = 1, total2 = 1;
		for(int i=1; i<=this->exp; i++) {
			total1 *= this->base;
		}
		for(int i=1; i<=ob.exp; i++) {
			total2 *= ob.base;
		}
		tmp1.base = total1 + total2;
		tmp1.exp = 1;
		return tmp1;
	}
	Power operator-(Power ob) {
		Power tmp,tmp1;
		int total1 = 1, total2 = 1;
		for(int i=1; i<=this->exp; i++) {
			total1 *= this->base;
		}
		for(int i=1; i<=ob.exp; i++) {
			total2 *= ob.base;
		}
		tmp1.base = total1 - total2;
		tmp1.exp = 1;
		return tmp1;
	}
};

int main() {
	Power ob1(2,3), ob2(2,2), ob3;

	ob3 = ob1 + ob2;
	ob3.printCalVal();
	ob3.print();

	return 0;
}