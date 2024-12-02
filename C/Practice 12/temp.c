/*
Name : temp.c
*/

#include <stdio.h>
double FtoC(double temp_f); //Define a real function

int main(void)
{
	double c, f; //real number variable
	printf("Enter Fahrenheit temperature :");
	scanf(" %lf", &f);
	c = FtoC(f); //function call
	printf("Fahrenheit temperature of %.1f corresponds to Celsius temperature of %.1f. \n", f, c);
	return 0;
}
double FtoC (double temp_f) //Temperature conversion function
{
	double temp_c;
	temp_c = (5.0*(temp_f - 32.0)) / 9.0;
	return temp_c; //return result value
}
