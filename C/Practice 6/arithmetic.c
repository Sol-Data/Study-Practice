/*
Name : arithmetic.c
*/

#include<stdio.h>

int main(void)
{
	int x, y, result;
	char a, b;
	
	printf("Please enter two characters : ");
	scanf(" %c", &a);
	scanf(" %c", &b);
	
	printf("Please enter two integers : ");
	scanf("%d", &x);
	scanf("%d", &y);
	
	result = x + y; // Addition
	printf("%d + %d = %d \n", x, y, result);
	
	result = x - y; // Subtraction
	printf("%d - %d = %d \n", x, y, result);
	result = x * y; // Multiplication
	printf("%d + %d = %d \n", x, y, result);
	result = x / y; // Divide
	printf("%d / %d = %d \n", x, y, result);
	return 0;
}

