/*
Name : login_rule.c
*/

#include <stdio.h>
#include <string.h> //Function to calculate the number of characters in a string

int main(void)
{
	int i;
	int upper, lower, digit; //conditioner flag variable
	char pass[30];


	while (1) {
		printf("Generate password: ");
		scanf("%s", pass); //String Storage

		upper = lower = digit = 0; //flag Initialization
		for (i = 0; i < strlen(pass); i++) //Repeat as many characters
		{
			if (pass[i] >= '0' && pass[i] <= '9') //number?
				digit = 1;
			else if (pass[i] >= 'A' && pass[i] <= 'Z') //capital letter?
				upper = 1;
			else if (pass[i] >= 'a' && pass[i] <= 'z') //small letter?
				lower = 1;
		}
		if ((digit == 1) && (upper == 1) && (lower == 1))
		{
			printf("appropriate password. \n");
			break;
		}
		else
			printf("Shuffle numbers, lowercase letters, and uppercase letters to recreate the password!\n");
	}
	return(0);
}
