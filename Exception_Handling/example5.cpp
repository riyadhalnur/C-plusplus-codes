/*#include<iostream>
using namespace std;
int myFunc( int m , int n ){
	try{
		if( n == 0 ) throw 1;
		if( m < n ) throw 2;
		else if( m % 2 != 0 ) throw 3;
		else if( n % 2 != 0 ) throw 4;
		return m/n;
	}catch( int ){
		//throw;
		cout << "Exception in myFunc()" << endl;
		throw;
	}
}
int main(){
	int i, j;
	i = 3; j = 11;
	try{
		cout << myFunc( i , j ) << endl;
	}catch( ... ){
		cout << "Exception in main().. " << endl;
	}
	return 0;
}*/