/*
Name : basic_for2.c
*/

#include <stdio.h>

int main(void)
{
	int i;
	
	for (i = 0; i < 5; i++)
	{
	printf ("This is the %d repeat. \n", i);
	// printf ("This is the %dth iteration". \n", i+1);
	}

	printf("Iteration has ended. \n");

	return 0;
}
