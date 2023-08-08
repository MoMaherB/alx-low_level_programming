#include "main.h"

/**
 * create_array - creates arry of charachters
 *
 * @size: the size of array
 * @c: the charachtr
 * Return: n or NUll
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == NULL)
		return (NULL);
	while (size--)
		n[size] = c;
	return (n);
}
