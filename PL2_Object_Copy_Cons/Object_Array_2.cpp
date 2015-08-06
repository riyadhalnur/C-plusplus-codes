/*#include<iostream>
using namespace std;
class myClass{
    int A;
    public:
        void setA( int n ){ A = n;}
        int getA(){return A;}
};
int main(){

    myClass obj[3];
    myClass *p;
    p = obj;
    for( int i = 1 ; i <= 3 ; i++ ){
        p -> setA( i*10 );
        p++;
    }
    p = obj;
    for( int i = 0 ; i < 3 ; i++ ){
        cout << p -> getA() << endl;
        p++;
    }

    return 0;
}
*/