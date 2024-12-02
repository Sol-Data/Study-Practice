/*
Name : dowhile2.c
*/

#include<stdio.h>

int main(void)
{
	int x, sum = 0;
	do {
		printf("Please enter an integer(Exit if 0) : ");
		scanf("%d", &x);
		sum = sum + x;
	} while (x != 0);
	// sum = sum - x;  // if not 0 (z.B Exit if 1)-> Sum of numbers before input

	printf("sum of integers : %d \n", sum);
	return 0;
}
