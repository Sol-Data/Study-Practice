/*
a program that determines grades and credits
Name : grading.c
*/

#include<stdio.h>

int main(void)
{ 
	int score; 

	printf("Please enter your grade:"); 
	scanf("%d", &score);

	if (score >= 90) 
		printf ("Acceptance: grade A \n"); 
	else if (score >= 80) 
		printf ("Acceptance: grade B \n"); 
	else if (score >= 70) 
		printf ("Acceptance: grade C \n"); 
	else if (score >= 60) 
		printf ("Acceptance: grade D \n"); 
	else 
		printf ("failure: grade F \n");
	return 0; 
}
