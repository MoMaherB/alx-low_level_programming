#include "main.h"

/**
 * _strdup - creates arry of charachters
 *
 * @str: the size of array
 * Return: n or NUll
 */

char *_strdup(char *str)
{
	int length;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
