/*
Name : basic_for3.c
Description : Programs that output * symbols in a square shape using nested for statements
*/

#include <stdio.h>

int main(void)
{ 
	int x, y; 

	for(y = 0;y < 5; y++) 
	{
		for(x = 0;x < 10; x++) 
			printf("*"); 

		printf("\n"); 
	} 

	printf("Completion\n");

	return 0; 
} 
