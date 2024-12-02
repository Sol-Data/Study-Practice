/*
Name : theater2.c
*/

#include<stdio.h>
#define SIZE 5 //symbol constant

int main(void)
{
	int seat_number, i;
	int seats[SIZE] = { 0 }; //initialize array, Unbooked...

	while (1) //always repeat with 'true'
	{

		printf("---------------\n");
		printf("  1  2  3  4  5\n");
		printf("---------------\n");

		for (i = 0; i < SIZE; i++)
			printf("  %d", seats[i]); //Output Reservation Status
		printf("\n");		
		printf("Please enter your preferred seat number (exit at 0):");
		scanf("%d", &seat_number); //Enter seat number

		if (seat_number == 0) break; // if '0' Termination
		
		if (seat_number < 0 || seat_number > SIZE) {

			printf("Please enter a number between 1 and 5.\n");
			continue; //Perform again if not in range of seats
		}

		if (seats[seat_number - 1] == 0) { // if not booked
			seats[seat_number - 1] = 1; // Reservation
			printf("Reserved.\n\n");
		}
		else // if already booked
			printf("Already Reserved Place.\n \n");
	} //End of while statement
	return 0;
}
