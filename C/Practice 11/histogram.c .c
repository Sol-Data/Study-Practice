/*
Name : histogram.c 
*/

#include <stdio.h>
#define SIZE 10

int main(void)
{
	int n[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
//	int n[SIZE] = { 1, 2, 3, 4, 5, 6, 5, 4, 3, 2 };
	int i, j;

	printf("element\tvalue\thistogram  \n");
	for (i = 0; i < SIZE; ++i)
	{
		printf("%d\t%d\t", i, n[i]);
		for (j = 1; j <= n[i]; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
