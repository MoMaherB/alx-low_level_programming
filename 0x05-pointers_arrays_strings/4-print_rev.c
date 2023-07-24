#include "main.h"

/**
 * print_rev - function thatakes a pointer to an int parametr
 *
 *@s: ...do somthing
 *
 * Return: length
 */

void print_rev(char *s)
{
	int i =0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
