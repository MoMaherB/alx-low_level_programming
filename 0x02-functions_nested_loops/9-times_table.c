#include "main.h"
#include <stdlib.h>

/**
 * times_table - Checks if a character is low.
*/
void times_table(void)
{
	int i, j, sum;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			sum = i * j;
			_putchar(sum + '0');
			if (sum <= 9)
				_putchar(' ');
			else
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
		}
		_putchar('\n');
	}
}
