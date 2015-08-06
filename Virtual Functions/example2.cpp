/*#include<iostream>
using namespace std;
class cPolygon{
protected:
	int width , height;
public:
	void setValue( int w , int h = 0 ){ // assigning default value 
		cout << "I am inside cPolygon setValue function:" << endl;
		width = w; height = h; 
	} 
};
class cRectangle : public cPolygon{
public:
	int getPerimeter(){ 
		cout << "I am inside cRectangle getPerimeter function:" << endl;
		return 2 * ( width + height ); 
	}
};
class cSquare : public cPolygon{
public:
	int getPerimeter(){ 
		cout << "I am inside cSquare getPerimeter function:" << endl;
		return 4 * width; 
	}
};
int main(){
	cPolygon *p;
	cRectangle t1;
	cSquare t2;
	p = &t1;
	p -> setValue( 100 , 200 );
	cout << t1.getPerimeter() << endl;
	p = &t2;
	p -> setValue( 50 );
	cout << t2.getPerimeter() << endl;
	return 0;
}*/