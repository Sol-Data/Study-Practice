/*
Name : pointer_array2.c
*/
#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30 };

	printf("a[0] = %d\n",a[0]); //a array 1st value output
	printf("*a = %d\n\n", *a); //value output of pointer a
	printf("a[1] = %d\n",a[1]);
	printf("*(a+1) = %d\n\n", *(a+1));
	printf("a[2] = %d\n",a[2]);
	printf("*(a+2) = %d\n\n", *(a+2));

	return 0;
}
