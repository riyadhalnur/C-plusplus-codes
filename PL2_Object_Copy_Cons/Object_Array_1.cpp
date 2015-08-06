/*#include<iostream>
using namespace std;
class myClass{
    int A;
    public:
        myClass( int n ){ A = n;}
        int getA(){return A;}
		void setA( int i ){ A = i; }
};
void myFunc( myClass &ob ){
	ob.setA( 40 );
	cout << "Inside myFunc: " << ob.getA() << endl;
}
int main(){
    //myClass obj[3] = {myClass(10),
    //    myClass(20),
     //   myClass(30)};

    myClass obj[3] = {10,20,30};
	
    myClass *p;
    p = obj;
    int i = 0;
    while(i<3){
        cout << p->getA() << endl;
        p++;
        i++;
    }
	myClass obj2( 20 );
	cout << "\nInside main: " << obj2.getA() << endl;
	myFunc( obj2 );
	cout << "\nInside main: " << obj2.getA() << endl;
    return 0;
}*/