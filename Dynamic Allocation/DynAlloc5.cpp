#include <iostream.h>

int main() {
    
    // C/C++ pointer variables
    int i = 0;
    int* p = &i;
    
    i = 1;
    cout << *p << endl;
    
    *p = 2;
    cout << i << endl;
    
    
    return 0;
}
