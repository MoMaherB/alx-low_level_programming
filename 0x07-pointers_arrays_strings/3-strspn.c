#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The input string to search.
 * @accept: The string containing the characters to be accepted.
 *
 * Return: The number of bytes in the initial segment of s consisting only of
 *         bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;

	while (*s && found)
	{
		char *ptr = accept;

		found = 0;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				found = 1;
				count++;
				break;
			}
			ptr++;
		}

		s++;
	}

	return (count);
}
