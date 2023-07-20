#include "main.h"

/**
 * print_triangle - This function print nubers from 0 to 9 except 2 and 4
 * @size: parameter
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int train, space, draw;

	if (size > 0)
	{
		for (train = 1; train <= size; train++)
		{
			for (space = size - 1; space >= train; space--)
			{
				_putchar(' ');
			}
			for (draw = 1; draw <= train; draw++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
