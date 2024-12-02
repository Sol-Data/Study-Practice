/*
Name : for1.c
Description : Integer sum program using iterations
*/

#include <stdio.h>

int main(void)
{
	int i, sum, limit;
	
	sum = 0; //initialize to 0 for addition calculation
	printf("How far should I calculate it:");
	scanf("%d", &limit);
	
	for (i = 1; i <= limit; i++)
	{
		sum += i; //sum = sum + i
	}
	
	printf ("Sum of integers from 1 to %d = %d \n", limit, sum);
	
	return 0;
}
