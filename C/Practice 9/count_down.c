/*
Name : count_down.c
*/

#include<stdio.h>

int main(void)
{
	int count;
	
	printf("Please enter a number: ");
	scanf("%d", &count);

	while (count > 0) {
		
		printf("%d \n", count);
		count--;
	}
	printf("Launch! \n");
	return 0;
}
