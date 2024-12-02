/*
Name : coin_toss.c
*/

#include <stdlib.h> //include standard libraries
#include <stdio.h> // Includes standard I/O
#include <time.h> //include time function

int coin_toss(void); //declaration of function, toss coin

int main(void)
{
	int toss;
	int heads = 0;
	int tails = 0;
	srand((unsigned)time(NULL)); //seed Occurrence

	for (toss = 0; toss < 100 ; toss++){
		if (coin_toss() == 1) //front?
			heads++;
		else
			tails++;
	}
	printf("front of coin: %d \n", heads);
	printf("back of coin: %d \n", tails);
	return 0;
	
}
int coin_toss(void) //Coin toss function
{
	int i = rand() %2;//remaining 0 or 1
	if (i == 0) //return 0 if remaining 0
		return 0;
	else
		return 1; //return 1 if remaining 1
}
