/*
Name : minimum.c
*/

#include<stdio.h>

int main(void)
{
	int number, min_value = 100000; // Put a large value in min

	printf("Please enter an integer(Termination is Ctrl+z)\n");

	while (scanf("%d", &number) != EOF) // Is the input Ctrl+z?
	{
		if (number < min_value)
		{
			min_value = number;
			printf("Medium minimum is %d \n", min_value); // Medium minimum value without update			
		}
			// printf("Medium minimum is %d \n", min_value);  // Medium minimum value with update
	}
	printf("Minimum value is %d \n", min_value);
	return 0;
}
