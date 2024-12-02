/*
Output a phrase using a type specifier
*/

#include <stdio.h>
int main(void)
{
	printf("%d plus %d is %d. \n", 2, 3, 5);             // output addition value
	printf("%d plus %d is %d. \n", 2, 3, 2+3);           // output addition value
	printf("%d times %d is %d. \n", 2, 3, 6);            // output multiplication value
	printf("%d times %d is %d. \n", 2, 3, 2*3);          // output multiplication value
	printf("%d divided by %d ist %d. \n", 10, 2, 10/2);  // output divide value
	printf("%d divided by %d ist %d. \n", 10, 2, 5);     // output divide value
	return 0;
}
