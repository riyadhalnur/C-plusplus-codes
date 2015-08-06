#include <iostream>
using namespace std;

int sum_digit(int r);

int main() {
    int n;

    cout << "Enter an integer number: ";
    cin >> n;

    cout << "Sum of digits: " << sum_digit(n);

    return 0;
}

int sum_digit(int r) {
    int sum = 0,p;

    while(r > 0) {
        p = r % 10;
        sum = sum + p;
        r = r / 10;
        if(r == 0 && sum > 9){
            r = sum;
            sum = 0;
        }
    }

    return sum;
}
