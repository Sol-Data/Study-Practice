/*
Name : static.c
*/

#include <stdio.h>
void sub();

int main(void)
{
	sub();
	sub();
	sub();

	return 0;
}

void sub(void)
{
	int auto_count = 0; //Automatic Region Variable Declaration
	static int static_count = 0; //static region variable

	auto_count++;
	static_count++;

	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
}
