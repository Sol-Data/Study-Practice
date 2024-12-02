/*
Name : days_in_month.c
Description : Output days for month
*/

#include<stdio.h>

int main(void)
{
int month, days;

printf("Please enter the month: ");
scanf("%d", &month);

	switch(month)
	{
	case 2:
		days = 28; // February is 28 days
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30; // April, June, September and November are 30 days
	break;
	default:
		days = 31;// January, March, May, July, August, October and December are 31 days
		break;
	}
	printf("The number of days in the month of %d is %d days \n", month, days);
	return 0;
}
