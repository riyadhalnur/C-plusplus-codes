/*#include<iostream>
using namespace std;
class Base{
	int i;
public:
	Base( int n ){ 
		i = n ; 
		cout << "Constructing Base Class.." << i << endl; 
	}
	~Base(){ cout << "Destroying Base Class.." << i << endl; }
};
class Derived : public Base{
	int j;
public:
	Derived( int m , int n ) : Base( m ){ 
		j = n;
		cout << "Constructing Derived Class.." << j << endl; 
	}
	~Derived(){ cout << "Destroying Derived Class.." << j << endl; }
};
int main(){
	Derived t( 100 , 200 );
	return 0;
}*/