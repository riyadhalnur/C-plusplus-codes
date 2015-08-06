#include <iostream>
using namespace std;

int main()
{
	char msg[] = "This is a test encryption";
	char key = 88;

	cout << "Original String: " << msg << "\n";

	for(int i=0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;
	cout << "Encrypted Message: " << msg << "\n";

	for(int i=0; i < strlen(msg); i++)
		msg[i] = msg[i] ^ key;
	cout << "Decrypted Message: " << msg << "\n";

	return 0;
}