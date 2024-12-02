/*
Name : grading2.c
*/

#include<stdio.h>

int main(void)
{
	char grade;
	printf("Please enter credit: ");
	scanf("%c", &grade);

	switch(grade)
	{	
	case 'A' :
		printf("Excellent!\n" );
		break;
	case 'B' ://intentional omission
	case 'C' :
		printf("Good\n" );
		break;
	case 'D' :
		printf("Poor\n" );
		break;
	case 'F' :
		printf("Fail\n" );
		break;
	default :
		printf("Invalid input.\n" );
		break;
	}
	return 0;
}
