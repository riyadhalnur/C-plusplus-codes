/*#include<iostream>
using namespace std;
class A{
	int x , y;
public:
	A( int m = 0 , int n = 0 ){ x = m; y = n; }
	int getX(){ return x; }
	int getY(){ return y; }
	A operator ++(){
		cout << "Inside prefix ++ operator.." << endl;
		++this->x;
		++this->y;
		return *this;
	}
	A operator ++( int u ){
		cout << "Inside postfix ++ operator.." << endl;
		this->x++;
		this->y++;
		return *this;
	}
	A operator -(){
		this->x = -this->x;
		this->y = -this->y;
		return *this;
	}
};
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