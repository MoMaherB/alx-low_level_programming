#include "main.h"

/**
 * _strlen - function that takes a pointer to an int parametr
 *
 *@s: ...do somthing
 *
 * Return: length
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
