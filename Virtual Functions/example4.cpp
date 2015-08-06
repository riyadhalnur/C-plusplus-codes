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
	virtual int getPerimeter(){ return 0; }
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
	p -> setValue( 10 , 20 );
	cout << p -> getPerimeter() << endl;
	p = &t2;
	p -> setValue( 5 );
	cout << p -> getPerimeter() << endl;
	return 0;
}*/