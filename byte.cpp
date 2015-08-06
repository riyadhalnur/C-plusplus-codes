#include <iostream>
using namespace std;

int main()
{
	double byte, kb, mb, gb;
	
	cout << "Enter size in bytes: ";
	cin >> byte;
	
	char choice;
	cout << "Conversion Options: \n";
	cout << "1. byte to KB\n";
	cout << "2. byte to MB\n";
	cout << "3. byte to GB\n";
	cout << "Enter choice: ";
	cin >> choice;
	
	switch(choice) {
		case '1':
			kb = byte / 1024;
			cout << "Size in KB: " << kb << " KB";
			break;
		case '2':
			mb = byte / (1024*1024);
			cout << "Size in MB: " << mb << " MB";
			break;
		case '3':
			gb = byte / (1024*1024*1024);
			cout << "Size in GB: " << gb << " GB";
			break;
		default:
			cout << "Enter a conversion choice";
	}
	
	return 0;
}