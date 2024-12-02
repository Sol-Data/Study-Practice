/*
A program that calulates the sum of two numbers
*/
#include <stdio.h>

int main(void)
{
	int x;                                             // Variable to save the first integer
	int y;                                             // Variable to save the second integer
	int sum;                                           // Variable to save the sum of two integers
	int prod;                                          // Variable to save the product of two integers
	
	x = 100;                                           // In Variable x, enter 100
	y = 200;                                           // In Variable y, enter 200
	
	sum = x + y;                                       // Perform addition operation
	prod = x * y;                                      // Perform multiplication operation
	printf("The sum of two numbers: %d \n", sum);      // The sum of two numbers output
	printf("The product of two numbers: %d \n", prod); // The product of two numbers output
	
	return 0;
	
}
