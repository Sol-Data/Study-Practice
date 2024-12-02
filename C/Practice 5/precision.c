/*
Name : precision
*/

#include <stdio.h>
int main(void)
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;
	
	printf("the size of the float=%d\n", sizeof(float));
	printf("the size of the double=%d\n", sizeof(double));
	
	printf("x = %.25f\n",x);
	printf("y = %.25f\n",y);
	
	return 0; 
}
