/*
Name : basic_array2.c
*/

#include<stdio.h>

#define STUDENTS 5

int main(void)
{
	int i, sum = 0;
	int score[STUDENTS];
	double average;

	for (i = 0; i < STUDENTS; i++) {
		printf("Please enter the grade:");
		scanf("%d", &score[i]); // save data in array
	}

	for (i = 0; i < STUDENTS; i++)
		sum += score[i]; //execute for statement by number of sources
		// sum = s0 + s1 + s2 + s3 ....
	average = (double)sum / STUDENTS;
	// average = sum / STUDENTS;
	printf("The average grade= %f \n", average);
	return 0;
}
