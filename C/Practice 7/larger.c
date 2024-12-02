/*
Name : larger.c
*/

#include<stdio.h>

int main(void)
{
	int x, y, max;

	printf("First integer: ");
	scanf("%d", &x);

	printf("Second integer: ");
	scanf("%d", &y);

	if (x > y)
	max = x;
	else
	max = y;
	
	printf("The larger number is %d ", max);
	return 0;
}

