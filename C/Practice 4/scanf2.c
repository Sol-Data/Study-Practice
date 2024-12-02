/*
Name : Enter Credit
*/
#include <stdio.h>
int main(void)
{
	double grade;                             // Declaration of real variable
	
	printf("Please enter your credit : ");    // Output of credit's input
	scanf("%lf", &grade);                     // Input real number in variable address
	
	printf("You have %.2lf credits! \n", grade); // Credit output
	return 0;
}
