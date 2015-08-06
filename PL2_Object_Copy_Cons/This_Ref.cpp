/*#include<iostream>
using namespace std;
class myClass{
    int x, y;
public:
    myClass( int x , int y ){ this->x = x; this->y = y; }
    ~myClass(){}
    int &setX(){ return x;}
    int &setY(){ return y;}
    int getX(){ return x;}
    int getY(){ return y;}
};
int main(){
    myClass p( 10 , 20 );
    cout << p.getX() << " , " << p.getY() << endl;
    p.setX() = 30;
    p.setY() = 40;
    cout << p.getX() << " , " << p.getY() << endl;
    return 0;
}*/