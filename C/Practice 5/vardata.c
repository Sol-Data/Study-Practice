/*
Name : precision
*/

#include<stdio.h>
int main(void)
{
	int month, day, year; // date variable
	int ticket; // ticket value variable
	float discount; // discount rate variable
	
	printf("Please enter today's date (in YYYY.DD.YY format): ");
	scanf("%d.%d.%d", &year, &month, &day);
	
	printf("How much is it to watch a movie these days?");
	scanf("%d", &ticket);
	
	printf("What percentage discount can I get if I have a membership card?");
	scanf("%f", &discount);
	
	printf("\n%dyear %dmonth %dday in the evening \n", year, month, day);
	
	printf("How about watching a movie for %d won? \n", ticket);
	printf("You can get a %.2f%% discount! \n", discount);
	
	return(0);
}
