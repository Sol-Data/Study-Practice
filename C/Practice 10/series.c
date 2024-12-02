/*
Name : series.c
*/

#include <stdio.h>

int main(void)
{
	int n, i;
	int result;

	printf("Please enter a value of n: ");
	scanf("%d", &n);
	
	result = 0; //initialize to 0 for addition calculation
	for (i = 1; i <= n; i++)
		result += i*i; // result = result + (i*i)
	
	printf("calculated value is %d. \n", result);
	return 0;
}
