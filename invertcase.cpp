#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void invertcase(char *str);

int main()
{
	char str[80];

	strcpy(str, "Riyadh Al Nur");

	invertcase(str);

	cout << "Inverted string: " << str;

	return 0;
}

void invertcase(char *str) {
	while(*str) {
		if(isupper(*str)) *str = tolower(*str);
		else if (islower(*str)) *str = toupper(*str);

		str++;
	}
}
