#include<iostream>
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
class B2 : public B1{
	int b;
public:
	B2( int m , int n ) : B1( n ){
		b = m;
		cout << "Constructing B2: " << b << endl;
	}
	~B2(){ cout << "Destructing B2: " << b << endl; }
	int getb(){ return b; }
};
class B3 : public B2{
	int c;
public:
	B3( int p , int q , int r ) : B2( q , r ){
		c = p;
		cout << "Constructing B3: " << c << endl;
	}
	~B3(){ cout << "Destructing B3: " << c << endl; }
	int getc(){ return c; }
};
class B4 : public B3{
	int d;
public:
	B4( int p , int q , int r, int s ) : B3( q , r , s ){
		d = p;
		cout << "Constructing B4: " << d << endl;
	}
	~B4(){ cout << "Destructing B4: " << d << endl; }
	int getd(){ return d; }
};
int main(){
	B4 t( 10 , 20 , 30, 40 );
	cout << t.geta() << " , " << 
		t.getb() << " , " << t.getc() << " , " << t.getd() << endl;
	return 0;
}