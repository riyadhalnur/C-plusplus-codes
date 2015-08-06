#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char str[80];
	char *start, *end;
	char t;
	int len;
	
	cout << "Enter a string: ";
	gets(str);
	cout << "\n";
	
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
	
	cout << "String length: " << strlen(str) << "\n";
	cout << "Inverted String: " << str << "\n";
	
	return 0;
	}