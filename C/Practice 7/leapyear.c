/*
Leap Year Judgment Program
Name : leapyear.c
*/

#include<stdio.h>

int main(void)
{ 
	int year; 

	printf("Please enter year"); 
	scanf("%d", &year); 
	
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d year is leap years.\n", year); 
	else 
		printf("%d years is not leap years.\n", year); 
	
	return 0; 
}
