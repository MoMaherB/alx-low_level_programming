#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: somthing
 * @argv: another
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = atoi(argv[2]);
		x = atoi(argv[1]);
		printf("%d\n", x * y);
	}

	return (0);
}
