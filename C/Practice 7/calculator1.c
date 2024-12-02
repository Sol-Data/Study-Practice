/*
Name : calculator1.c
*/

#include<stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("Please enter formula");
	printf("(for example: 2 + 5)");
	printf(">>");
	
	scanf("%d %c %d", &x, &op, &y);

	if(op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else 
		printf("Unsupported operator. ");

	printf("%d %c %d = %d ", x, op, y, result);
return 0;
}
