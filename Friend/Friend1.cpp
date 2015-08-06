#include<iostream>
using namespace std;

class Employee{
	char *Name;
	char *BloodGroup;
public:
	friend int Match( Employee E1, Employee E2 );
	Employee( char *n, char *b );
};

Employee::Employee( char *n, char *b )
{
	Name = new char[ strlen( n ) + 1 ];
	BloodGroup = new char[ strlen( n ) + 1];
	strcpy( Name, n );
	strcpy( BloodGroup, b );
}

/* Match() is not a member function. */

int Match( Employee E1, Employee E2 )
{
	/* can directly access private data members BloodGroup. */
	if( strcmp( E1.BloodGroup, E2.BloodGroup ) == 0 ){
		cout << "Mr. " << E1.Name << "'s Blood Group Matched with Mr. " << E2.Name << endl;
		return 1;
	}
	cout << "NO MATCH FOUND\n";
	return 0;
}

int main( void )
{
	Employee a( "Mashiour", "O+" );
	Employee b( "Musfiq", "B+" );
	Employee c( "Farhad", "O+" );

	Match(a, b);
	Match(a, c);

	return 0;
}