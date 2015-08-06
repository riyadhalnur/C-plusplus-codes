#include<iostream>
#include<cstring>
using namespace std;

enum Days { ST, MW, SaTh };
enum TimeSlot {am8_10, am10_12, pm12_2, pm230_430, pm430_630 };
char DayName[3][25] = { "Sunday & Tuesday", "Monday & Wednesday", "Saturday & Thursday"};
char Times[5][20] = {"8 am to 10 am", "10 am to 12 pm", "12 pm to 2 pm", "2:30 pm to 4:30 pm", "4:30 pm to 6:30 pm"};

class Course;

class Room{
	int Number;
	char TimeAlloc[ 6 ];
	char DayAlloc[4];
	void Assign( int t, int d );
public:
	int Match( Course C );
	Room( int n );
};

class Course{
	char *Name;
	TimeSlot T;
	Days D;
public:
	friend int Room::Match( Course C );
	Course( char *n, TimeSlot t, Days d );
};


Course::Course(char *n, TimeSlot t, Days d )
{
	Name = new char[strlen(n)+1];
	strcpy( Name, n );
	T = t;
	D = d;
}

Room::Room( int n )
{
	Number = n;	
	strcpy( TimeAlloc, "00000" );
	strcpy( DayAlloc, "000" );
}

void Room:: Assign( int t, int d )
{
	TimeAlloc[ t ] = '1';
	DayAlloc[ d ] = '1';
}

int Room::Match( Course C )
{
	if( TimeAlloc[C.T] == '0' && DayAlloc[C.D] == '0' ){
		Assign( C.T, C.D );
		cout << "Room " << Number << " Assigned to Course " << C.Name << " at " << Times[C.T] << " on " << DayName[C.D] << endl;
		return 1;
	}
	cout << "Room " << Number << " Occupied at " << Times[C.T] << " on " << DayName[C.D] << endl;	
	return 0;
}

int main( void )
{
	Course C1( "PL2[C]", am10_12, ST );
	Course C2( "Algorithm", am10_12, ST );
	Room R( 424 );
	
	R.Match( C1 );
	R.Match( C2 );
		
	return 0;
}