/*
Name :  add.c
*/

#include <stdio.h>

int add(int x, int y) //add function, 2 parameters
{
	int result;
	
	result = x + y;
	return(result); // Returns the value of the result variable
}

int main(void)
{
	int sum;

	sum = add(2, 3); //function call, sum stores return values
	printf("addition result=%d \n", sum);

	sum = add(9, 5);
	printf("addition result=%d \n", sum);

	return 0;
}
