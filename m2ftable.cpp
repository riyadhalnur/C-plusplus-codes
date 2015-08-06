#include <iostream>
using namespace std;

int main()
{
	double f, m;
	int count;

	count = 0;

	for(m=1.0; m <=100; m++)
	{
		f = m*3.28;
		cout << m << " meters is " << f << " feet.\n";
		count++;
		
		if(count==10)
		{
			cout << "\n";
			count=0;
		}
	}

	return 0;
}
