/*#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
class myClass{
    int *p;
    char *c;
public:
    myClass(){
        cout << "Constructing.." << endl;
    }
    ~myClass(){
        free(p);
        free(c);
        cout << "Destroying.." << endl;
    }
    void setValue( int m , char *str ){
        p = (int*) malloc (sizeof(int));
        *p = m;
        c = (char*) malloc (sizeof(strlen(str)+1));
        strcpy( c , str );
    }
    void show(){
        cout << *p << " , " << c << endl;
        return;
    }
};
myClass Func1( int m , char *str ){
    myClass om3;
    om3.setValue( m , str );
    return om3;
}
int main(){
    myClass om1, om2;
    //om1.setValue(1,"Hello");
    om2.setValue(2,"World");
    //om1.show();
    om2.show();
    om1 = Func1(3, "Good");
    om1.show();
    return 0;
}*/