/*
Program that output by type specifier
*/

#include <stdio.h>

int main(void)
{
	printf("%d is integer.\n", 10);           // integer output
	printf("%f is real number.\n", 3.14);     // real number output
	printf("%.2f is real number.\n", 3.14);   // real number output
	printf("%c is the first letter.\n", 'A'); // character output
	printf("%s is a string.\n", "Hey");       // string output 
	printf("k = %d", k);                      // an integer variable output  ----- compile error, this is a sample, write number instead of K
	return 0;
}
