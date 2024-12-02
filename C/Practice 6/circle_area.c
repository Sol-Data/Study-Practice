/*
Name : circle_area.c
*/

#include<stdio.h>
#define PI 3.141592 // Declaration of symbol constant

int main(void) 
{
	double volume; 
	double radius = 3; 
	
	volume = 4.0 * PI * (radius * radius * radius)/ 3.0;
	printf( "the volume of a sphere: %f", volume ); 
	return 0;
}


