/*
Name : facto2.c
*/

#include<stdio.h>

int main(void)
{
	int number;
	printf("Please enter a number. : ");
	scanf ("%d", &number);
	
	int i = 1;
	double factorial = 1;

	while (i <= number)
	{
		factorial = factorial * i;
		i++;
	}
	printf("%d! is %.0f. \n", number, factorial);
	return 0;
}
