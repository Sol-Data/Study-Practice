/*
Name : dice.c
*/

#include<stdio.h>

#define SIZE 6

int main(void)
{
	int freq[SIZE] = {}; //declaration and initialization
	int i;

	for (i = 0; i < 10000; i++) //Repetition 10,000 times
		++freq[rand() %6]; //Increase Array Value

	printf("====================\n");
	printf("face frequency\n");
	printf("====================\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d %3d \n", i + 1, freq[i]); //Array Value Output
	
	return 0;
}
