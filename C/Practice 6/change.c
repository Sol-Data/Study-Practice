/*
Name : change.c
*/

#include<stdio.h>

int main(void)
{
	int money, price, change;
	
	printf("money received from the customer: "); // 10000
	scanf("%d", &money);
	
	printf("the price of goods: "); // 3700
	scanf("%d", &price);
	
	change = (money - price);
	printf("5,000 won:%d \n", change / 5000);
	printf("1,000 won:%d \n ", (change % 5000) / 1000);
	printf("500 won:%d \n ", (change % 5000 % 1000) / 500);
	printf("100 won:%d \n ", (change % 5000 % 1000 % 500) / 100);
	printf("50 won:%d \n ", (change % 5000 % 1000 % 500 % 100) / 50);
	printf("10 won:%d \n ", (change % 5000 % 1000 % 500 % 100 % 50) / 10);
	
	return 0;
}

