/*
Name : for_facto.c
Description : Getting Factories Using Repetition
*/

#include <stdio.h>

int main(void)
{
	double fact=1;
	int i, n;

	printf("Please enter an integer: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	
	printf ("%d! is %lf.\n",n,fact);

	return 0;
}
