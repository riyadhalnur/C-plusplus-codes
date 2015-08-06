#include <iostream.h>

int main() {
    
    // C++ Reference Pointer Variables
    int j = 0;
    int& r = j; // has to be initialized
    
    j = 1;
    cout << r << endl;
    
    r = 2;
    cout << j << endl;
    
	const int& cr = j;
    // cr = 3        // NOT ALLOWED    
    
    cout << cr << endl;
    j = 1;
    cout << j << endl;
	
	return 0;
}
