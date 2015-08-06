#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char str[] = "riyadh al nur";
	char *start, *end;
	int len;
	char t;

	cout << "Original string: " << str << "\n";

	len = strlen(str);

	start = str;
	end = &str[len-1];

	while(start < end) {
		t = *start;
		*start = *end;
		*end = t;

		start++;
		end--;
	}

	cout << "Inversed string: " << str << "\n";

	return 0;
}




