/*
Name : lotto.c 
*/

#include <stdio.h>
#include <stdlib.h> //include standard library function

int main(void)
{
	int i;

	for (i = 0; i < 6; i++)
		printf("%d ", 1 + (rand() %45)); //random number Occurrence

	printf("\n");
	return 0;
}
