/*
Name : break.c
*/

#include <stdio.h>

int main(void)
{
	char c;
	
	for (;;) { //infinite loop
		printf("press any key, q is exit:");
		scanf(" %c", &c);
		if (c == 'q' || c == 'Q')
			break;
	}
	printf("Break! \n");
	return 0;
}
