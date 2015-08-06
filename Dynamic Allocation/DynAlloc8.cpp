#include <iostream.h>

int main() {
    
    // C/C++ pointer variables
    int* p = new int;
    
    *p = 1; //*p is the value at adress p
    cout << *p << endl;
    
    (*p)++;
    cout << *p << endl;
    
    
    return 0;
}
