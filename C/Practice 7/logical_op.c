/*
Name : logical_op.c
*/

#include<stdio.h>

int main(void)
{
	int x, y;

	printf("Please enter two integers: ");
	scanf("%d %d", &x, &y);
	
	printf("%d && %d's result value: %d \n", x, y, x && y);  // AND Operator
	printf("%d || %d's result value: %d \n ", x, y, x || y); // OR Operator
	printf("!%d's result value: %d \n ", x, !x); 			 // NOT Operator
	
	return 0;
}
