/*
Name : pointer_array3.c
*/

#include <stdio.h>
int main(void)
{
	int a[ ] = { 10, 20, 30};
	int *p; //pointer declaration

	p = a; // save information from variable a in variable p
	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);//Output of array elements
	printf("p[0]=%d p[1]=%d p[2]=%d \n\n", p[0], p[1], p[2]); //Output the pointer like an array

	return 0;
}
