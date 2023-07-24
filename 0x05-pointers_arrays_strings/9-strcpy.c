#include "main.h"

/**
 * *_strcpy - function atakes a pointer to an int parametr
 *
 *@dest: ...do somthing
 *@src: gogogog
 * Return: length
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0';

	return (dest);
}
