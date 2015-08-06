/*#include<iostream>
#include<cstdlib>
using namespace std;
class myClass{
    int *A;
public:
    myClass(){
        A = new int[5];
        if(!A) exit(0);
    }
    ~myClass(){
        delete [] A;
    }
    int &setA( int n ){ return A[n]; }
    int getA( int m ){ return A[m]; }
};
int main(){
    myClass p;
    p.setA(0) = 20;
    cout << p.getA(0) << endl;
    p.setA(3) = 50;
    cout << p.getA(3) << endl;
    return 0;
}
*/