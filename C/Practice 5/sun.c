/*
Name : sun.c
*/

#include<stdio.h>
int main(void)
{
	double light_speed = 300000; // Variable to store the speed of light (300000km/sec)
	double distance = 149600000; // variable that stores the distance between the sun and the earth
	// reset to 149600000km. 
	double time; // variable representing time
	
	time = distance / light_speed; // divide the distance by the speed of light.
	
	printf("light speed is %fkm/s \n", light_speed);
	printf("Distance between the Sun and Earth is %fkm \n", distance);
	printf("achieving time is %f seconds\n", time); // output time. 
	
	return 0;
}

