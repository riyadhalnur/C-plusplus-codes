#include <iostream> 
using namespace std; 

class CPolygon {
	int private_var;
  protected: 
    int width, height; 
  public: 
    void set_values(int a, int b){ width=a; height=b;} 
  }; 
 
class CRectangle: private CPolygon { 
  public:
	//void set_pri_values( int a ){ private_var = a; } //This will give error due to private inheritance
	void set_values_rect(int a, int b){ width=a; height=b;}
    int area(){ return (width * height); } 
  }; 
 
class CTriangle: protected CPolygon { 
  public:
	//void set_pri_values( int a ){ private_var = a; } //This will give error due to protected inheritance
	void set_values_tri(int a, int b){ width=a; height=b;}
    int area(){ return (width * height / 2); } 
  }; 
   
int main(){ 
	CRectangle rect; 
	CTriangle trgl; 
	
	//rect.set_values(4,5); //This will give error due to private inheritance
	rect.set_values_rect(4,5);
	cout << rect.area() << endl; 

	trgl.set_values_tri(4,5); 
	//trgl.set_values(4,5); //This will give error due to protected inheritance
	cout << trgl.area() << endl; 
	
	return 0; 
}