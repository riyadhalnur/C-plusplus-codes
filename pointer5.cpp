#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char *r;
	int i;
	char str[80] = "Riyadh Al Nur";

	r = str;

	cout << "Original string: " << str << "\n";

	for(i=0; r[i]; i++) {
		if(isupper(r[i]))
			r[i] = tolower(r[i]);
		else if(islower(r[i]))
			r[i] = toupper(r[i]);
	}

	cout << "Inverted string: " << str << "\n";

	return 0;
}