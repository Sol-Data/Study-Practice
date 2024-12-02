/*
Output personal information using format specifiers
*/

#include <stdio.h>
int main(void)
{
	printf("Name: Hong Gil Dong \n");        // name output
	printf("Name: %s \n", "Hong Gil Dong");  // name output
	printf("Age: %d years old \n", 21);      // age output
	printf("Address: %d Seoul \n", 200);     // address output
	return 0;
}
