/*#include<iostream>
using namespace std;
class base{
	int x;
public:
	void setx( int i ){ x = i; }
	int getx(){ return x; }
};
class derived : public base{
	int y;
public:
	void sety( int j ){ y = j; }
	int gety(){ return y; }
};
int main(){
	base *p;
	base obj1;
	derived obj2;
	p = &obj1;
	p -> setx( 100 );
	cout << p -> getx() << endl;
	p = &obj2;
	p -> setx( 200 );
	cout << p -> getx() << endl;
	//p -> sety( 300 ); // generates error
	//cout << p -> gety() << endl; // generates error
	cout << obj2.getx() << endl;
	obj2.sety( 300 );
	cout << obj2.gety() << endl;
	return 0;
}*/