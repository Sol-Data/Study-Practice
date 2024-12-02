/*
Name : calculator2.c
*/

#include<stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("Please enter a formula");
	printf("(for example: 2 + 5) ");
	printf(">>");

	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%':
		result = x % y;
		break;
	default:
		printf("unsupported operator) \n");
	//	result = 0; 
		break;
	}
	printf("%d %c %d = %d \n", x, op, y, result);
	return 0;
}
