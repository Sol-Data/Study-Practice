/*
Name : larger3.c
*/

#include<stdio.h>

int main(void)
{
	int x, y, z, max;

	printf("The first integer: ");
	scanf("%d", &x);

	printf("The second integer: ");
	scanf("%d", &y);
	
	printf("The third integer: ");
	scanf("%d", &z);
	
	if (x > y)
		if (x > z)
			max = x;
		else
			max = z;
	else 
		if (y > z)
			max = y;
		else
			max = z;
			
	printf("The larger number is %d \n", max);
	return 0;
}			

