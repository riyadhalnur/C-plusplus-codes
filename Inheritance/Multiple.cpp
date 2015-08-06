/*#include<iostream>
using namespace std;
class B1{
	int a;
public:
	B1( int x ){ 
		a = x;
		cout << "Constructing B1: " << a << endl;
	}
	~B1(){ cout << "Destructing B1: " << a << endl; }
	int geta(){ return a; }
};
class B2{
	int b;
public:
	B2( int m ){
		b = m;
		cout << "Constructing B2: " << b << endl;
	}
	~B2(){ cout << "Destructing B2: " << b << endl; }
	int getb(){ return b; }
};
class B3 : public B1 , public B2{
	int c;
public:
	B3( int p , int q , int r ) : B1( q ) , B2( r ){
		c = p;
		cout << "Constructing B3: " << c << endl;
	}
	~B3(){ cout << "Destructing B3: " << c << endl; }
	int getc(){ return c; }
};
int main(){
	B3 t( 10 , 20 , 30 );
	cout << t.geta() << " , " << 
		t.getb() << " , " << t.getc() << endl;
	return 0;
}*/