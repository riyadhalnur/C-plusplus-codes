#include <iostream.h>

int main() {
    
    int *p, i=10;
    p = new int(5); // will create one integer only and assign value 5
    cout << "\n" << *p << "\n" ;
	delete p;    // will deallocate one integer only
    p = new int(i); // will create one integer only and assign value 10 of i
	cout << "\n" << *p << "\n" ;
    delete p;       // will deallocate one integer only
    
    return 0;
}
