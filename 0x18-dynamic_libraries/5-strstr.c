#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The input string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 *         if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*haystack_ptr && *needle_ptr && (*haystack_ptr == *needle_ptr))
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (!(*needle_ptr))
			return (haystack);

		haystack++;
	}

	return (NULL);
}
