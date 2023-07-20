#include "main.h"

/**
 * print_most_numbers - This function print nubers from 0 to 9 except 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int count = 0;

	for (count = 0; count <= 9; count++)
	{
		if ((count == 2) || (count == 4))
			count++;
		_putchar(count + '0');
	}
	_putchar('\n');
}
