/*
Author: Immobility

HackGSU Fall 2019
*/

#include <stdio.h>

unsigned int num;

int main()
{
	printf("Try to guess my number!\n");
	scanf("%d", &num);
	guess_check();
}

int guess_check()
{
	num += 402;
	num /= 4;
	num *= 3;
	num = num<<1;

	if (num == 30036)
	{
		printf("Wow, nice guess!");
	}
	else
		printf("Wrong!");
}
