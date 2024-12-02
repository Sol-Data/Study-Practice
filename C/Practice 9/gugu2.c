/*
Name : gugu2.c
*/

#include<stdio.h>

int main(void)
{
		int i = 1;
		int a;
		printf("Please enter a number: ");
		scanf("%d", &a);

		while (i <= 9)
		{
			//printf("3*%d = %d\n", i, 3 * i);
			printf("%d * %d = %d\n", a, i, a*i);
			i++;
		}
		return 0;
}

