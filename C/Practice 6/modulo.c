/*
Name : modulo.c
*/

#include<stdio.h>

int main(void)
{
	int remainder;
	int n;
	
	printf("Please enter an integer : ");
	scanf("%d", &n);
	
	remainder = n % 2;
	printf("When divided by two, the rest=%d \n", remainder);
	return 0;
}

