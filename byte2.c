#include <stdio.h>

int main(void)
{
	char choice;
	float byte, kb, mb, gb;
	
	printf("Enter size in bytes: ");
	scanf("%f", &byte);
	
	printf("Conversion Options - \n");
	printf("1. byte to KB\n");
	printf("2. byte to MB\n");
	printf("3. byte to GB\n");
	printf("Enter choice: ");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1:
			kb = byte / 1024;
			printf("Size in KB: %f KB", kb);
			break;
		case 2:
			mb = byte / (1024*1024);
			printf("Size in MB: %f MB", mb);
			break;
		case 3:
			gb = byte / (1024*1024*1024);
			printf("Size in GB: %f GB", gb);
			break;
		default:
			printf("Enter a valid choice.");
	}
	
	return 0;
}
	