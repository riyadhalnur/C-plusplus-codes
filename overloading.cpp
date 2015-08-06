#include <iostream>
using namespace std;

int min(int i, int j);
char min(char i, char j);
int *min(int *i, int *j);

int main()
{
	int i = 45, j= 34;

	cout << "min('X', 'r') is: " << min('X', 'r') << "\n";
	cout << "min(34, 12) is: " << min(34, 12) << "\n";
	cout << "*min(&i, &j) is: " << *min(&i, &j) << "\n";

	return 0;
}

int min(int i, int j)
{
	if(i < j) return i;
	else return j;
}

char min(char i, char j)
{
	if(tolower(i) < tolower(j)) return i;
	else return j;
}

int *min(int *i, int *j)
{
	if(*i < *j) return i;
	else return j;
}