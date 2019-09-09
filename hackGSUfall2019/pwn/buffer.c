/*
Author: Immobility

HackGSU Fall 2019
*/


#include <stdio.h>
#include <string.h>

#define _getENV "thisispass" // hardcoded. Change this to an environmental variable file
#define aaaaa "GSUCTF{aaADSADA}"

int main(void)
{
	char input[16];
	int pass = 0;

	printf("What's the pass?\n");
	gets(input);

	if (strcmp(input, _getENV)) // Switch this with an environmental variable file
	{
		printf("Wrong Pass");
	}

	else
	{
		printf("You're not supposed to be here!");
	}

	if (pass)
	{
		getpass();
	}

	return 0;
}

int getpass(void)
{
	printf(aaaaa);
}
