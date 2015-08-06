#include<iostream>
using namespace std;
class Base{
	int i;
public:
	Base( int n ){ 
		i = n ; 
		cout << "Constructing Base Class.." << i << endl; 
	}
	Base(){ 
		i = 0; 
		cout << "Constructing Base Class.." << endl; 
	}
	~Base(){ cout << "Destroying Base Class.." << i << endl; }
};
class Derived : public Base{
public:
	Derived( int m ) { cout << "Constructing Derived Class.." << endl; }
	~Derived(){ cout << "Destroying Derived Class.." << endl; }
};
int main(){
	Derived t( 100 );
	return 0;
}