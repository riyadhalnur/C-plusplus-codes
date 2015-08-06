#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int i;
	char str[80];
	char numbers[10][80] = {
		"Raisa", "01717763289",
		"Rateeb", "01711394871",
		"Eshraf", "01714174603",
		"Riyadh", "01726177771" };

		cout << "Enter name: ";
		gets(str);

		for(i=0; i<10; i +=2)
			if(!strcmp(str, numbers[i])) {
				cout << "Number is " << numbers[i+1] << "\n";
				break;
			}

			if(i == 10) cout << "Not found.\n";

			return 0;
}