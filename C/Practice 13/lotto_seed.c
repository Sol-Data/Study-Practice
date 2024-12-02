/*
Name : lotto_seed.c
*/

#include <stdio.h>
#include <stdlib.h> //include standard library function
#include <time.h> // Include time function
#define MAX 45 //declare maximum value as symbol constant

int main(void)
{
	int i;
	srand( (unsigned)time( NULL ) ); //seed Occurrence

	for (i = 0; i < 6; i++)
		printf("%d ", 1 + (rand() % MAX)); //random number Occurrence

	printf("\n");
	return 0;
}
