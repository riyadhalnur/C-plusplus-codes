#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char *dict[][2] = {
		"pencil", "A writing instrument.",
		"keyboard", "An input device.",
		"rifle", "A shoulder-fired firearm.",
		"airplane", "A fixed-wing aircraft.",
		"network", "An interconnected group of computers."
	};
	char word[80];
	int i;

	cout << "Enter word: ";
	cin >> word;

	for(i=0; *dict[i][0]; i++) {
		if(!strcmp(dict[i][0], word)) {
			cout << word << " - " << dict[i][1] << "\n";
		break;
		}
	}

	if(!*dict[i][0])
		cout << word << " was not found.\n";

	return 0;
}