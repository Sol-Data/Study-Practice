/*
Name : traffic_light.c
*/

#include<stdio.h>

int main(void)
{
	char color;

	do
	{
		printf("Please enter the color of the light (r, y, g): ");
		scanf(" %c", &color);
	} while (color != 'r' && color != 'y' && color != 'g');

	switch (color)
	{
	case 'r':
		printf("Stop! \n");
		break;
	case 'y':
		printf("Careful! \n");
		break;
	case 'g':
		printf("Progress! \n");
		break;
	}
	return (0);
}
