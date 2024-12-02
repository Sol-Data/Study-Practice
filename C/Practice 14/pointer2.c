/*
Name : pointer2.c
*/

#include <stdio.h>

int main(void)
{ 

	int x = 100;
	int y = 200;

	int *p; //pointer declaration

	p = &x; // Store the address of the x variable in a pointer
	printf("value of p=%d\n", p); //output of pointer value
	printf("*p's value=%d\n", *p); //Output variable values to which the pointer points

	p = &y; // Store the address of the y variable in a pointer
	printf("value of p=%d\n", p); //output of pointer value
	printf("*p's value=%d\n", *p); //Output variable values pointed to by pointer

	return 0;
}
