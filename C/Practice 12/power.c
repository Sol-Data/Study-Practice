/*
Name : power.c
Description : Example of obtaining power-saving values
*/

#include <stdio.h>
int power(int x, int y); //declaration of function 

int main(void)
{
	int a, b, result;

	printf("Please enter two integers, <e.g. 3 7>: ");
	scanf("%d %d", &a, &b); //Input
	result = power(a, b); //function call
	printf("The %d power of %d is %d. \n", b, a, result); // Changing the position of a and b due to translation
return 0;
}
int power (int x, int y) //power function
{
	int i;
	int value = 1; // Initialize to 1

	for (i = 0; i < y; i++)
		value *= x; // value = value * x

	return value; //return
}
