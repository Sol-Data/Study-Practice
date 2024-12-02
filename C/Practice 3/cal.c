/*
the constant replaced by %d in printf statements can use a formula
*/

#include <stdio.h>

int main(void)
{
	printf("Korean  : %d \n", 80);
	printf("English : %d \n", 90);
	printf("Math    : %d \n", 95);
	printf("Total   : %d \n", 80+90+95);
	printf("Average : %f \n", (float)(80+90+95)/3);
	return 0;
}
