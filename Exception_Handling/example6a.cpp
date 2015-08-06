#include <iostream>
#include <cstring>
using namespace std;

class myException{
	char *e;
public:
	myException(char *s){
	    int size = strlen(s) + 1;
	    e = new char[size];
	    strcpy(e,s);
    }
	char* myError(){ return e; }
	~myException() {
	    if(e != NULL) {
			delete[] e;
		}
	}
};
int main(){
	myException t1("Division by zero..") , t2("Dividend is lesser..");
	int m = 50 , n = 5;
    try{
		if( n == 0 ) throw t1; //myException("Division by zero..");
		else if( m < n ) throw t2; //throw myException("Dividend is lesser..");
		cout << "Result: " << m/n << endl;
    }catch (myException &e) {
        cout << e.myError() << endl;
    }
    return 0;
}
