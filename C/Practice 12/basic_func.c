/*
Name : basic_func.c
*/

#include <stdio.h>

void print_lines() //line drawing function
{
	printf("--------------------- \n");
	printf("--------------------- \n");
}
int main(void)
{
	int i;
	print_lines(); //function call

	for (i = 0; i < 5; i++)
		printf("%d's square is %d \n", i, i*i);
	print_lines(); //function call
	return 0;
}
