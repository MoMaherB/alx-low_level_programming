#include "main.h"

/**
 * _strncpy - function that takes a pointer to an int parametr
 *
 *@dest: ...do somthing
 *@src: ..dkkf
 *@n: gggg
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
