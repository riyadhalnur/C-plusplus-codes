#include <iostream>
using namespace std;

int main()
{
	double lightspeed;
	double distance;
	double delay;
	double delay_in_min;

	distance = 34000000.0;
	lightspeed = 186000.0;

	delay = distance / lightspeed;
	cout << "Delay when talking to Mars: " << delay << " seconds\n";

	delay_in_min = delay / 60;
	cout << "Delay when talking to Mars (in minutes): " << delay_in_min << " minutes";

	return 0;
}