/*
Name : cond_op.c
*/

#include<stdio.h>

int main(void)
{
int x, y;

	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%d", &y);
	
	printf("The result of (x+1 == y) = %d \n", (x+1 == y) );
	printf("The result of !(x && y) = %d \n", !(x && y) );
	
	return 0;
}

