/*
Name : dowhile3.c
*/

#include<stdio.h>

int main(void)
{
	int x, sum = 0;
	do {
		printf("Please enter an integer (Exit if multiple of 3) : ");
		scanf("%d", &x);
		sum = sum + x;
		// } while (x != 0);
		} while (!(x %3 == 0));
		
		// sum = sum - x; ----> // Do not add a multiple of 3

	printf("Sum of integers : %d \n", sum);
	return 0;
}
