/*
Name : divide.c
*/

#include<stdio.h>

int main(void)
{
	int x, y, q, r;
	printf("Please enter 2 integers(example 9 2): ");
	scanf("%d %d", &x, &y);

	q = x / y;
	r = x % y;

	printf("The share is %d. ", q);
	printf("The rest is %d. ", r);
	return 0;
}
