#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <gmp.h>

/**
 * is_positive_integer - Check if a string is a positive integer.
 * @str: The input string to check.
 *
 * Return: True if the string is a positive integer, otherwise false.
 */
bool is_positive_integer(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (false);
		}
	}
	return (true);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	unsigned long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = strtoull(argv[1], NULL, 10);
	num2 = strtoull(argv[2], NULL, 10);
	result = num1 * num2;
	printf("%lu\n", result);

	return (0);
}
