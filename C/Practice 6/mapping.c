/*
Name : Composite substation operator program
*/

#include<stdio.h>

int main(void) 
{ 
	int x = 10, y = 10, z = 33;
	
	x += 1; // x = x + 1; -> 11
	y *= 2; // y = y * 2; -> 20
	z %= x + y; // z = z % (x + y ); 33 % 31 -> 2
	
	printf("x = %d y = %d z = %d \n", x, y, z); 
	return 0; 
} 
