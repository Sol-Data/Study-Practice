/*
Name: Example of symbolic constant
*/
#include <stdio.h>
#define PI 3.14159210

int main(void)
{
	float radius = 10.0;                              // The radius of a circle
	float area;                                     // The area of a circle
	
	area = PI * radius * radius;                    // Calculate the area of a circle
	printf("The area  of a circle : %f \n", area);  // The area of a circle output 
	return 0;
}
