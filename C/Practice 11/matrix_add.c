/*
Name : matrix_add.c
*/

#include <stdio.h>
#define ROWS 3 //declare the number of rows
#define COLS 3 //declare the number of columns

int main(void)
{
	int A[ROWS][COLS] = { { 2, 3, 0 },
					   	  { 8, 9, 1 },
		                  { 7, 0, 5 } }; //Two-dimensional Initialize Array
	int B[ROWS][COLS] = { { 1, 0, 0 },
		                  { 1, 0, 0 },
		                  { 1, 0, 0 } }; //Two-dimensional Initialize Array
	int C[ROWS][COLS]; //declare the resulting computation array
	int r, c; // Variable declaration for element index
	
	for (r = 0; r < ROWS; r++) // row from the first.
		for ( c = 0; c < COLS; c++) //column from first.
		    C[r][c] = A[r][c] + B[r][c]; //Add values for each element
		    
	for (r = 0; r < ROWS; r++) // Start with row
		{
			for (c = 0; c < COLS; c++) //Output of thermal elements in each row
				printf("%d ", C[r][c]);
			printf("\n");
		}

		return 0;
}
