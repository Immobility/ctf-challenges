/*
Author: Immobility

HackGSU Fall 2019
*/

#include <stdio.h>

char input[80];

int main()
{

	printf("What's the password?\n");
	fgets(input, 80, stdin);

	doNotLook();
}

int doNotLook()
{
	if (input[0] == 'g')
	{
		if (input[4] == 110)
		{
			if (input[6] == 104)
			{
				if (input[8] == 114)
				{
					if (input[2] == 112)
					{
						if (input[5] == 116)
						{
							if (input[7] == 51)
							{
								if (input[9] == 'Z')
								{
									if (input[1] == 48)
									{
										if (input[3] == 65)
										{
											printf("wow congrats, very nice");
										}
											else
												printf("no u\n");
									}
									else
										printf("no u\n");
								}
								else
									printf("no u\n");
							}
							else
								printf("no u\n");
						}
						else
							printf("no u\n");
					}
					else
						printf("no u\n");
				}
				else
					printf("no u\n");
			}
			else
				printf("no u\n");
		}
		else
			printf("no u\n");
	}
	else
		printf("no u\n");
}

