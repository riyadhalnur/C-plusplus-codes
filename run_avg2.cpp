#include <iostream>
using namespace std;

int running_average(int i);
void reset();

int main()
{
	int num;

	do {
		cout << "Enter numbers (-1 t oquit and -2 to reset): ";
		cin >> num;
		if(num == -2) {
			reset();
			continue;
		}
		if(num != -1)
			cout << "Running Average: " << running_average(num);
		cout << "\n";
	} while(num != -1);

	return 0;
}