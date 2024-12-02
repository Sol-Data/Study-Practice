/*
Name : pointer_string.c
*/
#include <stdio.h>
int main(void)
{
	char str[] = "hello";
	printf("%s\n", str);

	char *p = "world";
	printf("%s\n", p);
	//str[]= "Hello";
	//printf("%s\n", str);

	p = "World";
	printf("%s\n", p);

	return 0;
}
