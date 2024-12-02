/*
Name : sun2.c
*/

#include<stdio.h>
int main(void)
{
	double light_speed = 300000; // variable to save the speed of light(300000km/sec)
	double sec = 365 * 24 * 60 * 60;
	
	double distance; // variable representing distance
	
	distance = light_speed * sec; // calculate distance as time multiplied by the speed of light
	
	printf("Light speed is %fkm/s \n", light_speed);
	printf("One year is %f seconds \n", sec);
	printf("Distance of light progression in a year is %fkm\n", distance); // output time.
	
	return 0;
}

