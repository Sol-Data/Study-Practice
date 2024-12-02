/*
Name : larger2.c
*/

#include<stdio.h>

int main(void)
{
	int x, y, z, max;

	printf("First integer: ");
	scanf("%d", &x);

	printf("Second integer: ");
	scanf("%d", &y);
	
	printf("Third integer: ");
	scanf("%d", &z);

	if (x > y)
		max = x;     // If x is large, x to max
	else
		max = y;     // or y to max
	if (max > z)     // max greater than z?
		max = max;   // Keep max
	else
		max = z;     // z to max

	printf("The larger number is %d \n", max);
	return 0;
}

