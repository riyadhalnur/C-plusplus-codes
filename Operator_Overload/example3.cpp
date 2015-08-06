/*#include<iostream>
using namespace std;
class A{
	int x , y;
public:
	A( int m = 0 , int n = 0 ){ x = m; y = n; }
	int getX(){ return x; }
	int getY(){ return y; }
	bool operator < ( A obj ){
		return (this->x < obj.x && this->y < obj.y) ? true : false;
	}
	bool operator > ( A obj ){
		return (this->x > obj.x && this->y > obj.y) ? true : false;
	}
	bool operator == ( A obj ){
		return (this->x == obj.x && this->y == obj.y) ? true : false;
	}
};
int main(){
	A t1( 2 , 3 ) , t2( 4 , 5 ); //t1( 6 , 7 ) , t1( 4 , 5 ) and t1( 5 , 6 )
	if( t1 > t2 )
		cout << "t1( 2 , 3 ) > t2( 4 , 5 )" << endl;
	else if( t1 < t2 )
		cout << "t1( 2 , 3 ) < t2( 4 , 5 )" << endl;
	else if( t1 == t2 )
		cout << "t1( 2 , 3 ) == t2( 4 , 5 )" << endl;
	else
		cout << "No solutions.." << endl;
	return 0;
}*/