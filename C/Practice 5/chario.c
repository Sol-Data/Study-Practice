/*
Name : chario.c
*/

#include<stdio.h>
int main(void)
{
	char initial; // first letter variable
	char grade; // credit variable
	
	printf("What is the first letter of the English name?: ");
	scanf(" %c", &initial);
	
	printf("Can I ask you about your programming credits?(A to F) ");
	scanf(" %c", &grade);
	
	printf("\n");
	printf("%c's the grade in programming subjects is %c. ", initial, grade);
	return 0;
}
