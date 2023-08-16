#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
        if (!operation)
        {
                printf("Error\n"), exit(99);
        }
	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n"), exit(100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
