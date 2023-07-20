#include "main.h"

/**
 * more_numbers - This function prints from 0 to 14 for 10 times
 *
 * Return : somthing
 */

void more_numbers(void)
{
	int count_num, count_lines;

	for (count_lines = 0; count_lines <= 9; count_lines++)
	{
		for (count_num = 0; count_num <= 14; count_num++)
		{
			if (count_num <= 9)
				_putchar(count_num + '0');
			else
			{
				_putchar('1');
				_putchar((count_num - 10) + '0');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
