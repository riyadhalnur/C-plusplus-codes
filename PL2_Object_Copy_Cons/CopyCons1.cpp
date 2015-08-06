/*#include<iostream>
using namespace std;
class Omega{
    int var;
    public:
        Omega( int m )
        {
            var = m;
            cout << "Normal Cons: " << var << endl;
        }
        Omega( const Omega &om )
        {
            var = om.var + 100;
            cout << "Copy Cons: " << var << endl;
        }
        ~Omega()
        {
            cout << "Destruc: " << var << endl;
        }
        int getVar()
        {
            return var;
        }

};
Omega myFunc1()
{
    cout << "Inside myFunc1().." << endl;
    Omega om4(78);
    cout << "om4: " << om4.getVar() << endl;
    return om4;
}
void myFunc2( Omega om5 )
{
    cout << "Inside myFunc2().." << endl;
    cout << "om5: " << om5.getVar() << endl;
    return;
}
int main(){
    Omega om1( 27 );
    cout << "Inside main, om1: " << om1.getVar() << endl;
    Omega om2 = om1;
    cout << "Inside main, om2: " << om2.getVar() << endl;
    Omega om3 = myFunc1();
    cout << "Inside main, om3: " << om3.getVar() << endl;
    myFunc2( om2 );
    return 0;
}
*/