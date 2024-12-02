/*
Name : network_init.c
*/

#include <stdio.h>
void send(int i); //Define Function

int main(void)
{
	int i;
	for (i = 0; i < 5; i++) //5 iterations
		send(i);
	return 0;
}
void send(int i)
{
	static int inited = 0; //declare and initialize static variables

	if (inited == 0)
{
		printf("Network initialization succeeded. \n");
		inited = 1;
}
	printf("%d has been sent. \n", i);
}
