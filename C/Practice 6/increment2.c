/*
Name : increment2.c
*/

#include<stdio.h>

int main(void)
{
	int x=0, nextx=0;
	nextx = ++x;
	printf("nextx=%d, x=%d \n", nextx, x);
	
	x = 0;
	nextx = x++;
	printf("nextx=%d, x=%d \n ", nextx, x);
	
	x = 0;
	nextx = --x;
	printf("nextx=%d, x=%d \n ", nextx, x);
	
	x = 0;
	nextx = x--;
	printf("nextx=%d, x=%d \n ", nextx, x);
	return 0; 
}

