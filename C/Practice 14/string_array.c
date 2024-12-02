/*
Name : string_array.c
*/
#include <stdio.h>
int main(void)
{
	int i;
	char menu[5][10] = {
		"Gimbap",
		"Ramen",
		"Tteokbokki",
		"Dumpling",
		"Noodles"
	};
	
	for(i = 0; i < 5; i++)
		printf("%dth menu: %s \n", i+1, menu[i]);
		//Output from first row of array
return 0;
}
