/*
Name : avg_point.c
*/

#include<stdio.h>

int main(void)
{
	int scores[3]; //array lines
	int sum = 0;
	int i;
	double average;

	for (i = 0; i < 3; i++)
	{
		printf("What is the player's score in game %d ? ", i + 1);
		scanf("%d", &scores[i]); //enter in array
	}

	for (i = 0; i < 3; i++)
		sum +=scores[i]; //calculate sum

	average = ((double)sum / 3); //explicit transform
	printf("The average score is %.2f.\n", average);

	return(0);
}
