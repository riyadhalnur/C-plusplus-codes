/*#include<iostream>
using namespace std;
class A{
	int x , y;
public:
	A( int m = 0 , int n = 0 ){ x = m; y = n; }
	int getX(){ return x; }
	int getY(){ return y; }
	friend A operator + ( A obj1 , A obj2 );
	friend A operator + ( A obj , int m );
	friend A operator + ( int n , A obj );
	//friend A operator = ( A obj1 , A obj2 );
	//Cannont use a friend function fo overload the assignment operator
	//Assignment operator can only be overloaded by a member function
};
A operator + ( A obj1 , A obj2 ){
	A temp;
	temp.x = obj1.x + obj2.x;
	temp.y = obj1.y + obj2.y;
	return temp;
}
A operator + ( A obj , int m ){
	A temp;
	temp.x = obj.x + m;
	temp.y = obj.y + m;
	return temp;
}
A operator + ( int n , A obj ){
	A temp;
	temp.x = obj.x + n;
	temp.y = obj.y + n;
	return temp;
}
//A operator = ( A obj ){
//	this ->x = obj.x + 100;
//	this ->y = obj.y + 100;
//	return *this;
//}
int main(){
	A t1( 2 , 3 ) , t2( 4 , 5 ) , t3( 1 , 2 ) , t4;
	t4 = t1 + t2 + t3;
	cout << "t4 = t1 + t2 + t3" << endl << t4.getX() << " , " << t4.getY() << endl;
	t4 =  t1 + t2 + 10 + 20 + 30;
	cout << "t4 =  t1 + t2 + 10 + 20 + 30" << endl << t4.getX() << " , " << t4.getY() << endl;
	t4 =  10 + 20 + 30 + t1 + t2;
	cout << "t4 =  10 + 20 + 30 + t1 + t2" << endl << t4.getX() << " , " << t4.getY() << endl;
	return 0;
}*/