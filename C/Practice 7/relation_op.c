/*
Name : relation_op.c
*/

#include<stdio.h>

int main(void)
{
	int x, y;
	printf("Please enter two integers : ");
	scanf("%d%d", &x, &y);
	printf("x == y's result value: %d \n", x == y);  // is it the same?
	printf("x != y's result value: %d \n ", x != y); // is it different?
	printf("x > y's result value: %d \n ", x > y);   // is it larger?
	printf("x < y's result value: %d \n ", x < y);   // is it smaller?
	printf("x >= y's result value: %d \n ", x >= y); // is it larger or equal?
	printf("x <= y's result value: %d \n ", x <= y); // is it smaller or equal?
	
	return 0;
} 
