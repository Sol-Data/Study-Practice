/*
Name : deposit.c
*/

#include <stdio.h>
void sum_it (int money); //function definition

int main(void) {
	int i;
	for (i = 0; i < 5; i++) //5 days of repetition
		sum_it(i);//function call
	return 0;
}
void sum_it(int money) {
	static int sum = 0; //initialize static variable
	sum += money; //value cumulative
	printf("current total is %d \n", sum);
}
