#include <stdio.h>

int main(void)
{
	char choice;
	float byte, kb, mb, gb;
	
	printf("Enter size in bytes: ");
	scanf("%d", &byte);
	
	printf("Conversion Options: \n");
	printf("1. byte to KB\n");
	printf("2. byte to MB\n");
	printf("3. byte to GB\n");
	printf("Enter choice: ");
	scanf("%d", &choice);
	
	switch(choice) {
		case '1':
			kb = byte / 1024;
			printf("Size in KB: %d", &kb);
			break;
		case '2':
			mb = byte / (1024*1024);
			printf("Size in MB: %d", &mb);
			break;
		case '3':
			gb = byte / (1024*1024*1024);
			printf("Size in GB: %d", &gb);
			break;
		default:
			printf("Enter a valid choice.\n");
	}
	
	return 0;
}
	