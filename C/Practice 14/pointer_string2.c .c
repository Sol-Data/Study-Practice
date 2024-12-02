/*
Name : pointer_string2.c 
*/

#include <stdio.h>
int main( void )
{
	char *p[3] = { "January", "February", "March" };
	int i;

	for (i = 0; i < 3; i++)
		printf("%d month is %s).\n", i+1, p[i]);
	return 0;
}
