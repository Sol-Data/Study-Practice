/*
Name : while2.c
*/

#include<stdio.h>

int main(void)
{
	int i = 1; // initial expression from 1
	int sum = 0;

	while (i <= 10)
	{
		sum = sum + i;
		// printf("i=%d\n", i);
		i++;
	}
	printf("Sum=%d\n", sum);
	return 0;
}
