/*
Titel : Declaration of Variable and change Variable Value
*/
#include <stdio.h>
int main(void)
{
	int x = 10;                                          // In Variable x, enter 10
	int y = 20;                                          // In Variable y, enter 20
	printf("The Value of the Variable x is %d. \n", x);  // Output Value of Variable x
	
	x = y;                                               // Replace Variable y Value with Variable x
	printf("The Value of the Variable x is %d. \n", x);  // Output Value of Variable x
	
	return 0;
}
