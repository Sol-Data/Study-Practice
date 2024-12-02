/*
Name : call_value.c
*/

#include <stdio.h>
void move(int xpos, int ypos);

int main(void)
{
	int x = 10;
	int y = 20;

	printf("current position (%d, %d) \n", x, y); //x, y variable value output
	move(x,y); //Call Function
	printf("current position (%d, %d) \n", x, y); //x, y variable value output

	return 0;
}

void move(int xpos, int ypos)
{
	xpos = xpos + 1;
	ypos = ypos + 1;
	printf("xpos=%d\n", xpos); //xpos variable value output
	printf("ypos=%d\n", ypos); //ypos variable value output
}