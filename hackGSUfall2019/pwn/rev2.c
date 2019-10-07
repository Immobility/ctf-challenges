/*
Author: Immobility

HackGSU Fall 2019
*/


#include <stdio.h>
#include <string.h>

int main(void)
{
	static char flg[80] = "How were you able to see through this?! GSUCTF{flag_not_thought_of_yet}";
	char input[40];

	printf("Input: \n");
	scanf("%s", input);
	
	if ((strlen(input) <= 38) || (strlen(input) > 40) )
	{
		printf("Segmentation fault");
	}
	
	else
		printf("%s", flg);
	
}
