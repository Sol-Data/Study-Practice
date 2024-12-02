/*
Name : pointer3.c
*/

#include <stdio.h>
int main(void)
{
	int i = 10;
	int *p; //pointer declaration

	p = &i; // Store i variable address on pointer

	printf("value of i=%d\n", i); // variable ivalue output
	
	*p = 20; // Store values in variables pointed by the pointer
	printf("value of i=%d\n", i); // variable ivalue output

	return 0;
}
