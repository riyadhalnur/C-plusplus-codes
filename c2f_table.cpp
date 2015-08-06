#include <iostream>
using namespace std;

int main()
{
	double cel, fah;
	int count;
	
	count = 0;
	
	cout << "Celcius to Fahrenheit Conversion Table\n";
	
	for(cel=1.0; cel<=100.0; cel++)
	{
		fah = (cel * (9.0/5.0)) + 32;
		cout << cel << " celcius is " << fah << " fahrenheit\n";
		count++;
		
		if(count == 25) {
			cout << "\n";
			count = 0;
		}
	}
	
	return 0;
}