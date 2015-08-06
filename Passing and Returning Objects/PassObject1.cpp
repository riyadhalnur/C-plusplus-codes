#include<iostream>
using namespace std;

class Passing{
	int i;
public:
	Passing( int n );
	~Passing( void );
	void SetValue( int n ) { i = n; }
	int GetValue( void ) { return i; }
};

Passing::Passing( int n )
{
	i = n;
	cout << "constructing Object " << i << endl;
}

Passing::~Passing( void )
{
	cout << "Destroying Object " << i << endl;
}

void Fun( Passing x );

int main( void )
{
	Passing p( 1 );

	Fun( p );
	cout << "This is i in main: " << p.GetValue( ) << "\n";

	return 0;
}

void Fun( Passing x )
{
	x.SetValue( 2 );
	cout << "This is i in Fun: " << x.GetValue( ) << "\n";
}