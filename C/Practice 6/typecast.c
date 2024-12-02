/*
Name : typecast.c
*/

#include<stdio.h>
int main(void)
{
	int i;
	printf("%d\n", 3/2);
	printf("%f\n", 3.0/2);
	printf("%f\n", (double)3/ 2);
	printf("%f\n", (double)(3/ 2));	
	
	i = (int)1.3+ (int)1.8; 
	printf("%d\n", i);
	
	return 0;
}

