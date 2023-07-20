#include "main.h"

/**
 * print_numbers - This function print nubers from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int count = 0;

	for (count = 0; count <= 9; count++)
	{
		_putchar(count + '0');
	}
	_putchar('\n');

	return (0);
}
