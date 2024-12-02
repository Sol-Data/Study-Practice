/*
Name : basic_array1.c
*/

#include<stdio.h>
#define STUDENTS 5

int main(void)
{
	int score[STUDENTS];
	int i;

	score[0] = 90;//array initialization
	score[1] = 80;
	score[2] = 70;
	score[3] = 80;
	score[4] = 70;

	for (i = 0; i < STUDENTS; i++)
		printf("%dth student's score is %d. \n", i, score[i]); // i+1 --> 1st student's score is...output

	return 0;
}
