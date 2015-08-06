/*#include <iostream>
#include <exception>
using namespace std;
int main(){
	exception t1("Division by zero.."),t2("Dividend is lesser..");
	int m = 10 , n = 20;
    try{
		if( n == 0 ) throw t1;//throw exception("Division by zero..");
		else if( m < n ) throw t2;//throw exception("Dividend is lesser..");
    }catch (exception &e){     
        cout << e.what() << endl;
    }    
    return 0;
}*/