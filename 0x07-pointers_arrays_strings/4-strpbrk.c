#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The input string to search.
 * @accept: The string containing the bytes to search for.
 *
 * Return: A pointer to the first occurrence in the string s of any of the
 *         bytes in the string accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
				return (s);
			ptr++;
		}

		s++;
	}

	return (NULL);
}
