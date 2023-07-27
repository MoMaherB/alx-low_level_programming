#include "main.h"

/**
 * _strcat - function that takes a pointer to an int parametr
 *
 *@dest: ...do somthing
 *@src: ..dkkf
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index_dest, index_src;

	for (index_dest = 0; dest[index_dest]; index_dest++)
	{
	}

	for (index_src = 0; index_src < n && src[index_src] != '\0'; index_src++)
	{
		dest[index_dest + index_src] = src[index_src];
	}
	dest[index_dest + index_src] = '\0';

	return (dest);
}
