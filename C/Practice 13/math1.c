/*
Name : math1.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //include math-related library functions
int main(void)
{
	int x = 4 , y;
	y = log2(x) + exp(x);
	printf("y= %d", y);
}
