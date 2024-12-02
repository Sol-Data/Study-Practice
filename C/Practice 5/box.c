/*
Name : box.c
*/

#include<stdio.h>
int main(void)
{
	double width, length, height;
	double volume;
	
	printf("Please enter the horizontal height of the box at once: ");
	scanf("%lf %lf %lf", &width, &length, &height);
	
	volume = length*width*height;
	printf("The volume of the box is %f. \n", volume);
	
	return 0;
	
}

