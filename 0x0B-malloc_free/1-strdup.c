#include "main.h"

/**
 * _strdup - creates arry of charachters
 *
 * @s: the size of array
 * Return: m or NUll
 */

char *_strdup(char *s)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	;
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
