/*#include<iostream>
using namespace std;
class A{
	int x , y;
public:
	A( int m = 0 , int n = 0 ){ x = m; y = n; }
	int getX(){ return x; }
	int getY(){ return y; }
	friend A operator ++( A obj ); // use A &obj and see the difference
	friend A operator ++( A obj , int m ); // use A &obj and see the difference
	friend A operator -( A obj ); // use A &obj and see the difference
};
A operator ++( A obj ){ // use A &obj and see the difference
	cout << "Inside prefix ++ operator.." << endl;
	++obj.x;
	++obj.y;
	return obj;
}
A operator ++( A obj ,  int m ){ // use A &obj and see the difference
	cout << "Inside postfix ++ operator.." << endl;
	obj.x++;
	obj.y++;
	return obj;
}
A operator -( A obj ){ // use A &obj and see the difference
	obj.x = -obj.x;
	obj.y = -obj.y;
	return obj;
}
int main(){
	A t1(10,20) , t2 , t3 , t4;
	t2 = ++t1;
	cout << "t2 = ++t1: " << t2.getX() << " , " << t2.getY() << endl;
	t3 = t1++;
	cout << "t3 = t1++: " << t3.getX() << " , " << t3.getY() << endl;
	t4= -t1;
	cout << "t4 = -t1: " << t4.getX() << " , " << t4.getY() << endl;
	return 0;
}*/