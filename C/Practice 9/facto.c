/*
Name : facto.c
*/

#include<stdio.h>

int main(void)
{
	int i = 1;
	int factorial = 1; // initialize multiplication result

	while (i <= 10) // from 1~10
	{
		factorial = factorial * i;
		i++;
	}
	printf ("10! is %d. \n", factorial);
	return 0;
}
