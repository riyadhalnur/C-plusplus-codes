#include <iostream.h>

int main() {
    // const pointers
    
    int i = 1;
    
    int* p = &i; // pointer to data
    *p = 1;      // changing data
    p++;         // changing pointer - NOT ADVISABLE!!
    
    const int* cp         = &i;
    int* const pc         = &i;
    const int* const cpc = &i;
    
    // const int* cp        = &i;
    // pointer to constant data
    // *cp = 1;      // changing data  - NOT ALLOWED
    cp++;            // changing pointer - ALLOWED
    
    // int* const pc        = &i;
    // constant pointer to data
    *pc = 1;         // changing data  - ALLOWED
    // pc++;          // changing pointer - NOT ALLOWED

    // const int* const cpc = &i;
    // constant pointer to constant data
    // *cpc = 1;       // changing data  - NOT ALLOWED
    // cpc++;          // changing pointer - NOT ALLOWED

    // same declaration!
    const int* var1 = &i;
    int const* var2 = &i;
 
    return 0;
}
