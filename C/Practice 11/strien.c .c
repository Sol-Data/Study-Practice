/*
Name : strien.c 
*/

#include <stdio.h>

int main(void)
{
	char s[100], i;

	printf("Please enter string: ");
	scanf(" %s", s);

	i = 0;
	while (s[i] != '\0') //Check for null characters
		i++; //Increase one if not null character

	printf("string length: %d \n", i);
	return 0;
}
