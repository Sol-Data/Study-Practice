/*
Name : switch.c
*/

#include<stdio.h>

int main(void)
{
	int number;
	printf("Please enter an integer:");
	scanf("%d", &number);
	
	switch(number) 
	{
	case 0:     //is it 0?
		printf("None \n");
		break;
	case 1: // is it 1?
		printf("one \n");
		break;
	case 2: // is it 2?
		printf("two  \n");
		break;
	default: //If nothing fits...
		printf("many \n");
		break;
	}
return 0;
}
