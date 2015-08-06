#include <iostream> 
using namespace std; 
 
class CPolygon{ 
  protected: 
    int width, height; 
  public: 
    void set_values(int a, int b){ width=a; height=b;} 
  }; 
 
class CRectangle: public CPolygon{ 
  public: 
    int area (){ return (width * height); } 
  }; 
 
class CTriangle: private CPolygon{ 
  public:
    int area (){ return (width * height / 2); } 
  }; 

 class CSquare: protected CPolygon{ 
  public: 
    int area (){ return (width * width); } 
  }; 

int main () { 
  CRectangle rect; 
  CTriangle trgl; 
  CSquare sqr;
  rect.set_values(4,5); 
  //trgl.set_values(4,5); 
  //sqr.set_values(4,5); 
  cout << rect.area() << endl; 
  cout << trgl.area() << endl; 
  return 0; 
} 