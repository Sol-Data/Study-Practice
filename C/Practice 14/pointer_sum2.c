/*
Name : pointer_sum2.c
*/
#include <stdio.h>
#define MAX 3
int get_sum(int *a, int n);

int main(void)
{
	int data[MAX] = { 10, 20, 30};
	int value;

	value = get_sum(data, MAX);
	//function call, data is the first start address of the array
	printf("the total sum of the array elements is %d \n", value);
	return 0;
}

int get_sum(int *a, int n)
//Address information in argument data to address in parameter pointer...
//Save array size MAX to n variable
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d value of the first element = %d\n", i, *(a+i));
		sum += *(a+i); //int unit, 4 bytes incremental address extracting information extraction
	}
	return sum;
}
