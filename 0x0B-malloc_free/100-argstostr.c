#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the
 * concatenated string, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;
	int i, j, k;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}

	char *concatenated_str = malloc(sizeof(char) * (total_length + 1));

	if (concatenated_str == NULL)
		return (NULL);

	int index = 0;

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			concatenated_str[index] = av[i][k];
			index++;
		}
		concatenated_str[index] = '\n';
		index++;
	}
	concatenated_str[index] = '\0';

	return (concatenated_str);
}
