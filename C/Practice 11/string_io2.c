/*
Name : string_io2.c
*/

#include <stdio.h>

int main(void)
{
	char question[] = "Is Seoul the capital of Korea?(y or n)";
	char answer;
	
	printf("%s", question); //Output string array
	scanf("%c", &answer);

	if (answer == 'y') // Is it a 'y'
		printf("Correct.\n");
	else if (answer == 'n')
		printf("Wrong.\n");
	else
		printf("You've entered something wrong.\n");
	return 0;
}
