/*
Name : even_odd.c
*/

#include<stdio.h>

int main(void)
{ 
 	int number; 
 	
	printf("Please enter a integer:"); 
	scanf("%d", &number); 

	if( number % 2 == 0 ) 
		printf("The entered integer is an even number.\n"); 
	else 
		printf("The entered integer is an odd number.\n");
		
	printf("This sentence is always executed.\n");
	return 0; 
} 
