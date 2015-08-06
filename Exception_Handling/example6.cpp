/*#include <iostream>
#include <cstring>
using namespace std;
class Error {
	char *e;
    public:
        Error(char *s){
			strcpy( e , s );
		}
        char* what(){
			return e;
		}
};
int main() {
    try {
        cout << "First Statement" << endl;
        throw Error("An Error");
        cout << "Second Statement" << endl;
    } catch (Error e) {
        cout << "In Catch" << endl;
        cout << e.what() << endl;
    }
    cout << "This statement is going to prnted" << endl;
    return 0;
}*/