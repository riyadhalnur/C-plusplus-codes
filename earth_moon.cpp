#include <iostream>
using namespace std;

int main()
{
	double earth_grav;
	double moon_grav;
	int counter;

	counter = 0;
	for(earth_grav = 1.0; earth_grav <= 100.0; earth_grav++) 
	{
		moon_grav = earth_grav * 0.17;
		cout << earth_grav << " earth-pounds is equivalent to " << moon_grav << " moon pounds\n";
		counter++;

		if(counter == 25)
		{
			cout << "\n";
			counter = 0;
		}
	}

	return 0;
}