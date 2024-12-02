/*
Name : multiple.c
*/

#include<stdio.h>

int main(void)
{
	int number;
	
	int sum = 0;
	
	// scanf()
	
	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0)
		{           // without this from 0 to 100 all of them output    // Only if it's multiple of three
			sum += number;                                                           // Only if it's multiple of three
			printf("The sum of 3 multiples until now from 1 to 100 is %d. \n", sum); // Only if it's multiple of three
		}	  // without this from 0 to 100 all of them output                      // Only if it's multiple of three
		number++;
	}
	printf("The sum of all 3 multiples from 1 to 100 is %d. \n", sum);
	return 0;
}
