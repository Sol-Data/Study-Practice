/*
Name : increment1.c
*/

#include<stdio.h>
int main(void)
{
	int x = 10, y = 10;
	int result;

	result = ++x;
	printf("Value of ++x=%d\n", result);

	result = y++;
	printf("Value of y++=%d\n", result);

	result = y++;
	printf("Value of y++=%d\n", result);  
	// printf("value of y=%d\n, y); 
	return 0;
}
