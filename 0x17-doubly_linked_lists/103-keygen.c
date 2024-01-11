#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Generates and prints passwords for crackme5.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	char pass[7], *code;
	int len = strlen(argv[1]), i, temp;

	(void)argc;
	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	temp = (len ^ 59) & 63;
	pass[0] = code[temp];
	temp = 0;
	for (i = 0; i < len; i++)
		temp += argv[1][i];
	pass[1] = code[(temp ^ 79) & 63];
	temp = 1;
	for (i = 0; i < len; i++)
		temp *= argv[1][i];
	pass[2] = code[(temp ^ 85) & 63];
	temp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	pass[3] = code[rand() & 63];
	temp = 0;
	for (i = 0; i < len; i++)
		temp += (argv[1][i] * argv[1][i]);
	pass[4] = code[(temp ^ 239) & 63];
	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	pass[5] = code[(temp ^ 229) & 63];
	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
