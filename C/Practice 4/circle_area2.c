/*
Name : Calculate the area and perimeter of a circle
*/
#include <stdio.h>
#define PI 3.14

int main(void)
{
	double r;                                               // Declare variable that represent the radius of a circle
	double area;                                            // Declare variable that represent the area of a circle
	double peri;                                            // Declare variable that represent the perimeter of a circle
	
	printf("Please enter the radius of the circle : ");     // Output input guidance message
	scanf("%lf", &r);                                       // Receive radius input by variable r
	
	area = PI*r*r;                                          // Calculate the area of the circle and save it in area
	peri = 2.0*PI*r;                                        // Calculate the perimeter of the circle and save it in peri
	
	printf("The area of the circle : %f \n", area);         // Output the area of the circle 
	printf("The perimeter of the circle : %f \n", peri);    // Output the perimeter of the circle 
	
	return 0;
}
