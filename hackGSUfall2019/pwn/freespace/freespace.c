#include <stdio.h>
#include <string.h>

int main()
{	
	char input[50] = "";

	printf("Want to see a magic trick?\n");
	
	gets(input);
	if (strncmp(input, "yes", 3) == 0 || strncmp(input, "Yes", 3) == 0)
	{	
		sleep(3);
		aaaaa();
	}
	else
	{
		printf("Bad answer! I will not take %s for an answer!", &input);
	}

	fflush(stdin);
	fflush(stdout);
}

int aaaaa()
{
	printf("I'll make the stack pointer point to 0x00000000! %p \n", printf);
	asm("mov %rsp, 0");
	
	flug();

	return 0;
}

int restart()
{

}

int flug()
{
	FILE *f;
	f = fopen("flag.txt", "r");
	char s;
	while ((s = fgetc(f)) != EOF)
	{
		printf("%c", s);
	}
	fclose(f);

}

int flonk()
{
	printf("You flonked!");
}
