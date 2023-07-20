#include "main.h"

/**
 * print_square - This function print nubers from 0 to 9 except 2 and 4
 * @size: parameter
 *
 * Return: 0
 */
void print_square(int size)
{
	int l, w;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (w = 1; w <= size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
	else
		_putchar('\n');

}
