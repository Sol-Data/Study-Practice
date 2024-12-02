/*
Name : dowhile1.c
*/

#include<stdio.h>

int main(void)
{
	int i = 10;
	
	do{
		printf("Hello %d\n", i);
		i = i - 1;
		//i--;
	} while (i > 0); // Conditional expressions - inspection after sentence execution 

	return 0;
}
