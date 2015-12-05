#include<iostream>
using namespace std;

class base{
protected:
	int i;
public:
	base( int m ){
		cout << "Inside base constructor:" << endl;
		i = m;
	}
	~base(){
		cout << "Inside base destructor:" << endl;
	}
	virtual int myFunc(){
		return 0;
	}
};

class derived1 : public base{
public:
	derived1( int n ) : base(n){
		cout << "Inside derived1 constructor:" << endl;
	}
	~derived1(){
		cout << "Inside derived1 destructor:" << endl;
	}
	//If derived1 do not override myFunc then base's myFunc will be called
	int myFunc(){
		cout << "Inside derived1 myFunc function:";
		return i + i;
	}
};

class derived2 : public derived1{
public:
	derived2( int r ) : derived1(r){
		cout << "Inside derived2 constructor:" << endl;
	}
	~derived2(){
		cout << "Inside derived2 destructor:" << endl;
	}
	//If derived2 do not override myFunc then derived1's myFunc will be called
	int myFunc(){
		cout << "Inside derived2 myFunc function:";
		return i * i;
	}
};

int main(){
	base *p;
	derived1 t1( 10 );
	derived2 t2( 20 );

	p = &t1;
	cout << p -> myFunc() << endl;
	cout << t1.myFunc() << endl;

	p = &t2;
	cout << p -> myFunc() << endl;
	cout << t2.myFunc() << endl;

	return 0;
}
