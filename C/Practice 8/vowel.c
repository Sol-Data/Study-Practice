/*
Name : vowel.c
*/

#include<stdio.h>

int main(void)
{
	char ch;
	printf("Please enter a letter: ");
	scanf(" %c", &ch);
	switch (ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("%c is a vowel). \n", ch);
			break;
		default:
			printf("%c is a consonant. \n", ch);
	}
}
