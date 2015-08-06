#include <iostream>
using namespace std;
#define PI 3.14159

double area(double rad);

int main()
{
	double answer, rad;
	
	cout << "Enter the radius of the sphere: ";
	cin >> rad;
	answer = area(rad);
	cout << "The area of the sphere: " << answer;
	
	return 0;
}

double area(double rad)
{
	return(4 * PI * rad * rad);
}