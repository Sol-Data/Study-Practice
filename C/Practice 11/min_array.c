/*
Name : min_array.c
*/

#include<stdio.h>
#define SIZE 10

int main(void)
{
	int s[SIZE] = { 12, 3, 19, 6, 18, 8, 12, 4, 1, 19 };
	int i, minimum;

	minimum = s[0]; //initialize minimum value

	for (i = 1; i < SIZE; i++)
	{

		if (s[i] < minimum) //value comparison
			minimum = s[i]; //value exchange
	}

	printf("The minimum value is %d.\n", minimum);
	return 0;
}
