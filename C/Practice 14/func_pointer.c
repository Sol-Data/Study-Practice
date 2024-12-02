/*
Name : func_pointer.c
*/
#include <stdio.h>
int get_min(int, int); //declaration of function

int main(void)
{
	int n1, n2, result;
	int (*pf)(int, int); //declaration of function pointer

	printf("Enter two numbers<e.g; 5 3>: ");
	scanf("%d %d", &n1, &n2);

	pf = get_min;
	//get_min function in a pf variable
	result = pf(n1, n2); //Call a function using the function address
	printf("smaller value is %d).\n", result);
	return 0;
}
int get_min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}
