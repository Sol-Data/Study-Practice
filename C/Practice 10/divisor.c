/*
Name : divisor.c
*/

#include <stdio.h>

int main(void)
{
	int n, i;
	printf("Please enter a positive integer: ");
	scanf("%d", &n);
	printf("The divisor of %d is as follows. \n", n);
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0) //check for remaining 0
		printf("%d ", i); //Run when remaining 0
	}
	return 0;
}
