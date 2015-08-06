#include <iostream>
using namespace std;

void prime(int r);

int main() {
    int n;

    cout << "Enter an integer number: ";
    cin >> n;

    prime(n);

    return 0;
}

void prime(int r) {
    bool isprime;
    int t;

    isprime = true;

    for(t=2; t<=r/2; t++) {
        if((r%t) == 0) {
            isprime = false;
        }
    }

    if(isprime) {
        cout << "Number entered is a prime number\n";
    }
    else {
        cout << "Number entered is not a prime number\n";
    }
}
