/*
Name : square.c
*/

#include <stdio.h>

int square(int n); //function declaration
int main(void)
{
	int result;
	result = square(5); //function call
	printf("square value is : %d \n", result);
}


int square(int n) //square function
{
	return(n * n); //returns formula value directly
}
