#include <iostream.h>

void swap_pointers(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_reference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {

    int a = 1, b = 2;
    swap_pointers( &a , &b );
    cout << a << ' ' << b << endl;
    
    int c = 3, d = 4;
    swap_reference( c , d );
    cout << c << ' ' << d << endl;
    
    return 0;
}
