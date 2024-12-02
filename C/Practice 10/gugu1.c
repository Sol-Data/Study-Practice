/*
Name : gugu1.c
*/

#include <stdio.h>

int main(void)
{
	int x, dan;
	
	for (dan = 2; dan < 10; dan++)
	{
		for (x = 1; x < 10; x++)
			printf("%d*%d=%2d ", dan, x, dan*x);
	
	printf("\n");
	}
	return 0;
}
