#include <iostream>
using namespace std;

int fact(int n);

int main() {
	int r;

	cout << "Enter an integer number: ";
	cin >> r;

	cout << "Factorial of entered number: " << fact(r) << "\n";

	return 0;
}

int fact(int n) {
	int i, facto=1;

	if(n == 0 || n == 1) {
		facto = 1;
	}
	else {
		for(i=1; i <= n; i++) {
			facto = facto * i;
		}
	}

	return facto;
}