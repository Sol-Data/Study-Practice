/*
Name : pointer_array1.c
Description : Relationship between Pointer and Array
*/

#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30 };

	printf("&a[0] = %u\n", &a[0]); //Address output of 1st element
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);
	
	printf("a = %u\n", a); //Output value of variable a

	return 0;
}
