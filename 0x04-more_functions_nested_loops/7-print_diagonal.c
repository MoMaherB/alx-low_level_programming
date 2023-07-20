#include "main.h"

/**
 * print_diagonal - This function print nubers from 0 to 9 except 2 and 4
 * @n: parameter
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int draw;
	int space;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 2; space <= draw; space++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
