#include <iostream>
using namespace std;

int main()
{
	double distance, lightspeed, delay, delay_in_min;

	distance = 34000000.0;
	lightspeed = 186000.0;

	delay = (distance / lightspeed) * 2;
	cout << "Time delay for bidirectional conversation: " << delay << " seconds\n";

	delay_in_min = delay / 60;
	cout << "This in minutes: " << delay_in_min << " minutes";

	return 0;
}