/*
Name : alphabet.c
Description : Programs to classify characters
*/

#include<stdio.h>

int main(void)
{
		char ch;
		
		printf("Please enter the character: ");
		scanf("%c", &ch);
		
		if( ch >= 'A' && ch <= 'Z' )
				printf("%c is a capital letter. \n", ch);
		else if( ch >= 'a' && ch <= 'z' )
				printf("%c is lowercase letter. \n", ch);
		else if( ch >= '0' && ch <= '9' )
				printf("%c is a number. \n", ch);
		else
				printf("%c is other characters. \n", ch);
		return 0;
}
