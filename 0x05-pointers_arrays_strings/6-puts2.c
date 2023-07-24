#include "main.h"

/**
 * puts2 - function thatakes a pointer to an int parametr
 *
 *@str: ...do somthing
 *
 * Return: length
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
