#include<iostream>
using namespace std;

class Passing{
	int i;
public:
	void SetValue( int n ) { i = n; }
	int GetValue( void ) { return i; }
};

/* return object of type Passing */
Passing Fun( void );

int main( void )
{
	Passing p;

	p = Fun( );
	cout << p.GetValue( ) << "\n";

	return 0;
}

Passing Fun( void )
{
	Passing x;

	x.SetValue( 1 );
	return x;
}