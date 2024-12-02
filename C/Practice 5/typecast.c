/*
Name : typecast.c
*/

#include<stdio.h>
int main(void)

{
	int i;
	float f;
	f = 183.5;
	i = f;
	
	f=i;
	printf("i = %d \n", i);
	printf("f = %f \n", f);
	
	return 0;
}

