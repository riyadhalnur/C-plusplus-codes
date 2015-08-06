/*#include <iostream>
using namespace std;
class Point {
        int x, y;
    public:
        Point(int x = 0, int y = 0){
            this->x = x;
            this->y = y;
        }
        ~Point(){}
        int &setX(){//int x){
            //this->x = x;
            //return *this;
            return this->x;
        }
        Point &setY(int y){
            this->y = y;
            return *this;
        }
        int getX(){
            return this->x;
        }
        int getY(){
            return this->y;
        }
};
int main() {
    Point p;

    //p.setX(3);
    p.setX() = 3;
    p.setY(4);
	cout<<p.getX()<<" , "<<p.getY()<<endl;

    //p.setX(5);
    p.setX() = 5;
	p.setY(6);
	cout<<p.getX()<<" , "<<p.getY()<<endl;

	p.setY(5);
	//p.setX(6);
	p.setX() = 6;
	cout<<p.getX()<<" , "<<p.getY()<<endl;

    return 0;
}
*/