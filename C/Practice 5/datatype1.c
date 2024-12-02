/*
Name : datatype 1
*/
#include <stdio.h>
int main(void)
{
	short year = 10;           // Be careful not to exceed about 32,000
	int sale = 200000000;      // Be careful not to exceed about 2.1 billion.
	long total_sale = 0;
	total_sale = year * sale;  // Use as much as you want because it doesn't go over.
	
	printf("year is %d\n", year);
	printf("sale is %d\n",sale);
	printf("total sale is %d\n", total_sale);
	return 0;
}

