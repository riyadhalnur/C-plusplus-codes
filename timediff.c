#include <stdio.h> // standard I/O for printf() and scanf()

int getmin(void); // function protoype

void main(void)
{
	int min1, min2;
	
	printf("Enter starting time (e.g 3:00): ");
	min1 = getmin();
	printf("Enter ending time (e.g 4:30): ");
	min2 = getmin();
	
	printf("Time Difference in minutes: %d", min2-min1);
	
	return 0;
}

int getmin(void)
{
	int hours, minutes;
	
	scanf("%d:%d", &hours, &minutes);
	return(hours*60+minutes);
}