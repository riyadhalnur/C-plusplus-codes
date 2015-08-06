/*#include<iostream>
using namespace std;
class A{
	int x , y;
public:
	A( int m = 0 , int n = 0 ){ x = m; y = n; }
	int getX(){ return x; }
	int getY(){ return y; }
	A operator + ( A obj ){
		A temp;
		temp.x = this->x + obj.x;
		temp.y = this->y + obj.y;
		return temp;
	}
	A operator + ( int m ){
		A temp;
		temp.x = this->x + m;
		temp.y = this->y + m;
		return temp;
	}
	A operator = ( A obj ){
		this ->x = obj.x + 100;
		this ->y = obj.y + 100;
		return *this;
	}
};
int main(){
	A t1( 2 , 3 ) , t2( 4 , 5 ) , t3( 1 , 2 ) , t4;
	t4 = t1 + t2 + t3;
	cout << "t4 = t1 + t2 + t3" << endl << t4.getX() << " , " << t4.getY() << endl;
	t4 =  t1 + t2 + 10 + 20 + 30;
	cout << "t4 =  t1 + t2 + 10 + 20 + 30" << endl << t4.getX() << " , " << t4.getY() << endl;
	return 0;
}*/