#include "main.h"

/**
 * print_line - This function print nubers from 0 to 9 except 2 and 4
 * @n: parameter
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
