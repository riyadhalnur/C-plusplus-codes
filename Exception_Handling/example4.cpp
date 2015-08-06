/*#include<iostream>
using namespace std;
int myFunc( int m , int n ){
	try{
		if( n == 0 ) throw 1;
		else if( m < n ) throw 1.0;
		else if( m % 2 != 0 ) throw 'x';
		else if( n % 2 != 0 ) throw "error";
		return m/n;
	}catch( int ){
		cout << "Exception: Divide by zero" << endl;
		return 0;
	}catch( double ){
		cout << "Exception: Dividend is less than Divisor" << endl;
		return 0;
	}catch( char ){
		cout << "Exception: Results will be truncated" << endl;
		return 0;
	}catch( char*){
		cout << "Exception: Divisor is odd, results truncated" << endl;
		return 0;
	}
}
int main(){
	int i, j;
	i = 10; j = 2;
	cout << myFunc( i , j ) << endl;
	i = 0; j = 2;
	cout << myFunc( i , j ) << endl;
	i = 11; j = 2;
	cout << myFunc( i , j ) << endl;
	i = 11; j = 13;
	cout << myFunc( i , j ) << endl;
	i = 10; j = 3;
	cout << myFunc( i , j ) << endl;
	i = 15; j = 4;
	cout << myFunc( i , j ) << endl;
	return 0;
}*/