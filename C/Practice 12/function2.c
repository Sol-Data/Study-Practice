/*
Name : function2.c
*/

#include <stdio.h>

double func(double x, double y);

int main(void)
{
	double x, y;
	for(x = 0; x < 3.0; x += 1.0)
	{
		for(y = 0; y < 3.0; y += 1.0)
			printf("%f \n", func(x, y));
	}
return 0;
}

double func(double x, double y)
{
	double value;
	value = 1.5*x + 3.0*y;
	return value;
}

