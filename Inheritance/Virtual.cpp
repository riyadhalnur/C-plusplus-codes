#include<iostream>
using namespace std;
class base{
public:
	int i;
	base(){ cout << "Constructing base.. " << endl; }
	~base(){ cout << "Destructing base.. " << endl; }
};
class derived1 : virtual public base{
public:	
	int j;
	derived1(){ cout << "Constructing derived1.. " << endl; }
	~derived1(){ cout << "Destructing derived1.. " << endl; }
};
class derived2 : virtual public base{
public:
	int k;
	derived2(){ cout << "Constructing derived2.. " << endl; }
	~derived2(){ cout << "Destructing derived2.. " << endl; }
};
class derived3 : public derived1 , public derived2{
public:
	derived3(){ cout << "Constructing derived3.. " << endl; }
	~derived3(){ cout << "Destructing derived3.. " << endl; }
	int product(){ return i*j*k; }
};
int main(){
	derived3 t;
	t.i = 10;
	t.j = 20;
	t.k = 30;
	cout << t.product() << endl;
	return 0;
}