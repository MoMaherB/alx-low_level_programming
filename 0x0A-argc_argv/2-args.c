#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: somthing
 * @argv: another
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
