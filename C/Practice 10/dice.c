/*
Name : dice.c
*/

#include <stdio.h>
#define SUM 7

int main(void)
{
	int diceA, diceB;

	printf("Find the number of cases where the sum is %d. \n", SUM);
	printf("----------------------- \n");
	printf("Dice A Dice B \n");
	printf("----------------------- \n");

	for (diceA = 1; diceA <= 6; diceA++)
		for (diceB = 1; diceB <= 6; diceB++)
			if (diceA + diceB == SUM)
				printf("%d      %d \n", diceA, diceB);
	return 0;
}
