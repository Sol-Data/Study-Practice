/*
Name : prime.c
*/

#include <stdio.h>

int is_prime(int); //prime estimation function
int get_integer(void); //input function

int main(void)
{
	int n, result;

	n = get_integer(); //Input function call
	result = is_prime(n); //Call prime estimation function

	if (result == 1) //return value of 1, then prime
		printf("%d is a prime.\n", n);
	else //Not a prime if the return value is 0.
		printf("%d is not a prime.\n", n);
	return 0;
}
int get_integer (void) //input function
{
	int n;

	printf("Please enter an integer: ");
	scanf("%d", &n);//Enter Integer
	return n;  //Returns the value stored in the n variable
}
int is_prime(int n) //prime estimation function
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n%i == 0) //if divided by 0 is not a prime.
			return 0; // 0 return
	}
	return 1; //return prime by 1
}







