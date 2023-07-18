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
		for (j = 0; j <= 9; j++)
		{
			sum = i * j;
			_putchar(sum + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
