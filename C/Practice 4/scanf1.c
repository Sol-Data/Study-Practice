/*
Name : Use of scanf() function
*/
#include <stdio.h>

int main(void)
{
	int age;                                 // Declaration of variable age
	
	printf("Please enter your age: ");       // Output of number's input
	scanf("%d", &age);                       // Enter an integer value for variable address age
	
	printf("You're %d years old! \n", age);  // Age output
	return 0;
}
