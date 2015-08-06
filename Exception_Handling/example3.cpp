/*#include<iostream>
using namespace std;
//int myFunc( int m , int n ) throw ( int , double,  char , char* ){
int myFunc( int m , int n ) throw(...){
	if( n == 0 ) throw 1;
	else if( m < n ) throw 0.9;
	else if( m % 2 != 0 ) throw 'x';
	else if( n % 2 != 0 ) throw "error";
	return m/n;
}
int main(){
	int i, j;
	i = 2; j = 0;
	try{
		cout << "Result: " << myFunc( i , j ) << endl;
	}catch( int ){
		cout << "Exception: Divide by zero" << endl;
	}catch( double ){
		cout << "Exception: Dividend is less than Divisor" << endl;
	}catch( char ){
		cout << "Exception: Dividend is odd, results will be truncated" << endl;
	}catch( char*){
		cout << "Exception: Divisor is odd, results truncated" << endl;
	}
	return 0;
}*/