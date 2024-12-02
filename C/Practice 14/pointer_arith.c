/*
Name : pointer_arith.c
*/

#include <stdio.h>
int main(void)
{
	char c; 
	short s; 
	int i;
	char *pc; //character pointer declaration
	short *ps; //short integer pointer declaration
	int *pi; //int integer pointer declaration

	pc = &c; 
	ps = &s; 
	pi = &i;
	
	printf("Before increasing char pc = %d, short ps = %d, int pi = %d\n", pc, ps, pi);

	pc++; 
	ps++; 
	pi++;
	printf("After increasing char pc = %d, short ps = %d, int pi = %d\n", pc, ps, pi);
	return 0;
}
