/*#include<iostream>
#include<exception>
using namespace std;
class myException : public exception{
public:
	myException(char *s) : exception(s){}
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