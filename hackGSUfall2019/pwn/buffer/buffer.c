/*
Author: Immobility

HackGSU Fall 2019
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _getENV "thisispass" // hardcoded. Change this to an environmental variable file

int main(void)
{
	FILE *f;
	char s;
	f = fopen("flag.txt", "r");
	
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
		printf("\n");
		while ((s = fgetc(f)) != EOF)
		{
			printf("%c", s);
		}
		fclose(f);
	}

	fflush(stdin);
	fflush(stdout);

	return 0;
}
