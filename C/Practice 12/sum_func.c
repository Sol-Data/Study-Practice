/*
Name : sum_func.c
*/

#include <stdio.h>

int is_prime(int); //Calculation function the sum of the divisors
int get_integer(void); //Input function

int main(void)
{
	int n, result;

	n = get_integer(); //Input function call
	result = is_prime(n); //Calculation function the sum of the divisors
	
	printf("The sum of the divisors of %d is %d.\n", n, result);
	return 0;
}
int get_integer (void) //Input function
{
	int n;

	printf("Please enter an integer: ");
	scanf("%d", &n);//Enter Integer
	return n; //Returns the value saved in the n variable
}
int is_prime(int n) //Calculation Function the sum of the divisor
{
	int i;
	int sum=0;

	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
			sum = sum + i; // divided by zero, the value is accumulated.
	}
	return sum; //returns sum value.
}
