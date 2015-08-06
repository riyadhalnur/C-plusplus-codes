#include <iostream>
using namespace std;

int main()
{
	int t, i, num[4][5];

	for(t=0; t<4; ++t) {
		for(i=0; i<5; ++i) {
			num[t][i] = (t*5)+i+1;
			cout << num[t][i] << ' ';
		}
		cout << "\n";
	}

	return 0;
}