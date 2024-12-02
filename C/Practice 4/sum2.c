/*
Name : Output to calculate the sum of two integers input from the user
*/
#include <stdio.h>
int main(void)
{
	int x;                                              // Variable to save the first integer
	int y;                                              // Variables to save the second integer
	int sum;                                            // Variable to save the sum of two integers
	int prod;                                           // Variable to save the product of two integers
	
	printf("Please enter the first number : ");         // Output input guidance message
	scanf("%d", &x);                                    // Take one integer and save it in x
	
	printf("Please enter the second number : ");        // Output input guidance message
	scanf("%d", &y);                                    // Receive one integer and save it in y
	
	sum = x + y;                                        // Add two variables
	printf("The sum of two numbers : %d \n", sum);      // Output the value of sum in decimal form
	
	prod = x * y;                                       // Add two variables
	printf("The product of two numbers : %d \n", prod); // Output the value of product in decimal form
	
	return 0;	
}
