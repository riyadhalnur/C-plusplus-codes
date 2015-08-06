#include <stdio.h>

int main(void)
{
	int n = 1, sum = 0;
	
	for(n=1; n<=17; n = n+2) {
		printf("List of all odd integers from 1 to 17 inclusive: %d\n", n);
		}
	
	for(n=1; n<=17; n = n+2) {
		sum += n;
	}
	printf("Sum of the integers: %d\n", sum);
	
	return 0;
}