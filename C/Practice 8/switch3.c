/*
Name : switch3.c
*/

#include<stdio.h>

int main(void)
{
	int number;
	printf("Please enter an the month:");
	scanf("%d", &number);
	
	switch(number) 
	{
	case 1:     //is it 0?
		printf("January \n");
		break;
	case 2: // is it 1?
		printf("Febrary \n");
		break;
	case 3: // is it 2?
		printf("March  \n");
		break;
	default: //If nothing fits...
		printf("I don't know \n");
		break;
	}
return 0;
}
