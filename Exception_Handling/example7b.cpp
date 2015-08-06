/*#include<iostream>
#include<exception>
using namespace std;
class myException : public exception{
	char *e;
public:
	myException(char *s){ e = s; }
	const char* what(){ 
		cout << "overriddern in myException class.." << endl;
		return e; 
	}
};
int main(){
	int m = 10 , n = 0;
    try{		
		if( n == 0 ) throw myException("Division by zero..");
		else if( m < n ) throw myException("Dividend is lesser..");
		cout << "Result: " << m/n << endl;
    }catch(myException &e){
        cout << e.what() << endl;
    }    
    return 0;
}*/