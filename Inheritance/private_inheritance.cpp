#include<iostream>
#include<cstring>
using namespace std;
class student{
	int id;
	//char sname[10] , dname[10];
	char *sname , *dname;
protected:
	void setID( int i ){ id = i; }
	//void setName( char *n ){ strcpy( sname , n ); }
	//void setDept( char *d ){ strcpy( dname , d ); }
	void setName( char *n ){ sname = new char[ strlen( n ) + 1 ] ; strcpy( sname , n ); }
	void setDept( char *d ){ dname = new char[ strlen( d ) + 1 ] ; strcpy( dname , d ); }
public:	
	int getID(){ return id; }
	char *getName(){ return sname; }
	char *getDept(){ return dname; }
};
class BBA : private student{
	char *subjMajor;
public:
	void setDetail( int i , char *n , char *d , char *m ){
		setID( i );
		setName( n );
		setDept( d );
		subjMajor = new char[ strlen( m ) + 1 ]; 
		strcpy( subjMajor , m );
	}
	void showDetail(){
		cout << getID() << endl << getName() << endl << getDept() << endl << subjMajor << endl;
	}
};
class EEE : private student{
public:
	void setDetail( int i , char *n , char *d ){
		setID( i );
		setName( n );
		setDept( d );
	}
	void showDetail(){
		cout << getID() << endl << getName() << endl << getDept() << endl;
	}	
};
int main(){
	EEE e1;
	BBA b1;

	e1.setDetail( 100 , "AAA" , "EEE" );
	b1.setDetail( 200 , "BBB" , "BBA" , "HRM" );

	e1.showDetail();
	b1.showDetail();

	return 0;
}