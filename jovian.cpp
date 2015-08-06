#include <iostream>
using namespace std;

int main() 
{
	double earth;
	double jovian;

	cout << "Enter Jovian years: ";
	cin >> jovian;

	earth = jovian * 12.0;
	cout << "Equivalent Earth Years - " << earth << " years\n";

	return 0;
}