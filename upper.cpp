#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	char str1[80], str2[80], str3[80];
	int i;

	strcpy(str1, "this is a test");

	for(i=0; str1[i]; i++) str1[i] = toupper(str1[i]);
	
	cout << str1;

	cout << "\n";

	strcpy(str2, "THIS IS ");
	strcpy(str3, "A TEST...");	
	strcat(str2, str3);

	for(i=0; str2[i]; i++) str2[i] = tolower(str2[i]);

	cout << str2;
	cout << strlen(str2);

	return 0;
}