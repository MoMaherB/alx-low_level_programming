#include "main.h"

/**
 * print_line - This function print nubers from 0 to 9 except 2 and 4
 * @n: parameter
 *
 * Return: 0
 */

void print_line(int n)
{
	int m = 1;

	if (n >= 0)
		while (m <= n)
		{
			_putchar('_');
			m++;
		}
	_putchar('\n');
}
