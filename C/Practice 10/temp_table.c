/*
Name : temp_table.c
*/

#include <stdio.h>

int main(void)
{
	double t;
	
	for (t = 0.0; t <= 100.0; t += 10.0)
	{
		printf("%6.2f F = %6.2f C\n", t, (t - 32.0) * 5.0 / 9.0);
	}

	return 0;
}

