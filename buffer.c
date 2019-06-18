#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char buffer[10];
	char secret[25] = "GSUCTF{1_aM_n0W_HaX0r}";
	int passBOOL = 0;
	char pass[6] = "buffer";
	FILE *file;
	char len[255];

	printf("What's the secret? \n");
	gets(buffer);

	file = fopen("stringtext.txt", "r");

	if (strcmp(buffer, pass))
	{
		printf("\n Wrong pass! \n");
	}

	else
	
	{
		printf("Correct! The pass is %s", pass);
		passBOOL = 1;
	}

	if (passBOOL)
	{
		printf("%s", secret);
	}

	return 0;


}
