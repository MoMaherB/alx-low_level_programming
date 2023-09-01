#include "main.h"

/**
 * print_binary - print binary of decimal number
 * @n: number in binary
 */
void print_binary(unsigned long int n)
{
	int num, cont = 0;
	unsigned long int curr;

	for (num = 63; num >= 0; num--)
	{
		curr = n >> num;

		if (curr & 1)
		{
			_putchar('1');
			cont++;
		}
		else if (cont)
			_putchar('0');
	}
	if (!cont)
		_putchar('0');
}
