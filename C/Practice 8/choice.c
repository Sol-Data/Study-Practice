/*
Name : choice.c
*/

#include<stdio.h>

int main(void)
{
	char number;

	printf("Please enter the number:");
	scanf("%d", &number);

	switch(number) {
		case 1:
			printf("apple \n");
			break;
		case 2:
			printf("pear \n");
		case 3:
			printf("banana \n");
			break;
		default:
		printf("fruit \n");
		break;
}

	return 0;
}

