#include <iostream>
using namespace std;

int main()
{
	int i,j;
	bool isnotprime;

	for(i=1; i<100; i++){
		isnotprime = false;

		for(j=2; j<=i/2; j++)
			if((i%j) == 0) isnotprime = true;
		if(isnotprime)
			cout << i << " is not a prime number\n";
	}
	return 0;
}