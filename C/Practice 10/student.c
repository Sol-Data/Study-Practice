/*
Name : student.c
*/

#include <stdio.h>

int main(void)
{
	int i, students, score; //input variables
	int min = 1000, max = -1000; // Initialization
	int sum, avg; //calculation variable

	sum = 0; // Initialize Calculation Variables
	do {
		printf("Please enter number of students:");
		scanf("%d", &students);
	} while (students < 1 || students > 4);

	for (i = 0; i < students; i++){
		do {
			printf("Please enter the grade of %dth student: ", i + 1);
			scanf("%d", &score);
		} while (score < 0 || score > 100);

		if (score < min)
			min = score;
		if (score > max)
			max = score;
		sum = sum + score;
	}
	avg = sum / students;
	printf("maximum value: %d minimum value: %d average value: %d \n", max, min, avg);
}
