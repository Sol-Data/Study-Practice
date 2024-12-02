/*
Name : get_larger.c
Description : Example of a function that finds the largest number of two numbers

*/

#include <stdio.h>
int get_larger(int x, int y); //define function

int main(void)
{
	int a, b;
	//int result;

	printf("Please enter two integers: ");
	scanf("%d %d", &a, &b);
	printf("The larger of the two numbers is %d).\n", get_larger(a, b)); // Function call, a b is an argument
	//result = get_larger(a, b);
	//printf("The larger of the two numbers is %d).\n", result)
	return 0;
}

int get_larger(int x, int y)
{
	if (x > y)
		return(x);
	else return(y);
}
