/*
Name : if_else3.c
*/

#include<stdio.h>

int main(void)
{
	int number;
	printf("Please enter an the month:");
	scanf("%d", &number);
	
	if(number==1) 
		printf("January \n"); 
	else if(number==2)
		printf("Febrary \n"); 
	else if(number==3) 
		printf("March \n"); 
	else 
		printf("I don't know. \n");
		
	return 0;
}
