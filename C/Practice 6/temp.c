/*
Name : temp.c
*/

#include<stdio.h>

int main(void)
{
	double f_temp;
	double c_temp;
	
	printf("Please enter the Fahrenheit");
	scanf("%lf", &f_temp);
	c_temp = 5.0 / 9.0 * (f_temp - 32.0);
	printf("The temperature of Celsius is %f", c_temp);
	
	return 0;
}
