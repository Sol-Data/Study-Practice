/*
Name : pointer.c
*/

#include <stdio.h>
int main(void)
{
	int i = 10;
	int *p; //Pointer Declaration

	p = &i; //Save address of i variable in pointer variable

	printf("value of i=%d\n", i); // output of variable value of i
	printf("address of i=%d\n", &i); // output address of variable i

	printf("value of p=%d\n", p); //output of pointer variable values
	printf("value of *p=%d\n", *p); //Output the value of the variable to which the pointer points

	return 0;
}
