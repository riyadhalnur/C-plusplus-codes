#include<iostream>
using namespace std;

class TwoValues{
	int a, b;
public:
	TwoValues( int i, int j ) { a = i, b = j; }
	friend class Minimum;
};

class Minimum{
	//...
public:
	int Min( TwoValues x );
};

int Minimum::Min( TwoValues x )
{
	return x.a < x.b ? x.a : x.b;
}

int main( void )
{
	TwoValues ob( 10, 20 );
	Minimum m;

	cout << "Minimum is : " << m.Min( ob ) << endl;

	return 0;
}