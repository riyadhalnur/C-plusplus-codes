/*#include<iostream>
using namespace std;
int main(){
	int m, n;
	m = 10; 
	n = 2;
	cout << "m: " << m << " , " << "n: " << n << endl;
	try{
		if( n == 0 ) throw 1;
		else if( m < n ) throw 1.0;
		else if( m % 2 != 0 ) throw 'x';
		else if( n % 2 != 0 ) throw "error";
		cout << "Result: " << m/n << endl;
	}catch( int ){
		cout << "Exception: Divide by zero" << endl;
	}catch( double ){
		cout << "Exception: Dividend is less than Divisor" << endl;
	}catch( char ){
		cout << "Exception: Dividend is odd, results truncated" << endl;
	}catch( char*){
		cout << "Exception: Divisor is odd, results truncated" << endl;
	}
	return 0;
}*/