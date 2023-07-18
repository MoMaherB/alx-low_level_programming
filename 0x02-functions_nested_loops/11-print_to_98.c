#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - Checks if a character is lowercase.
 *
 * @n: The character to be checked.
 *
 * Return: abs(int).
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 89; i++)
	{
		if (i <= 9)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
