/*
Name : overflow
*/

#include <stdio.h>
int main(void)
{
	short value; // Short is from -32768 to 32767
	value = 32800;
	printf("data is %d\n", value);
	unsigned short x; // 0 to 65535 with unsigned
	x = 32800; 
	printf("data is %u\n", x);
	return 0;
}
