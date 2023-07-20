#include "main.h"

/**
 * more_numbers - This function prints from 0 to 14 for 10 times
 *
 * Return : count from 1 to 14 10 times
 */

void more_numbers(void)
{
	int count_num, count_lines, num;

	for (count_lines = 0; count_lines <= 9; count_lines++)
	{
		for (count_num = 0; count_num <= 14; count_num++)
		{
			num = count_num;
			if (count_num > 9)
			{
			_putchar(1 + '0');
			num = count_num - 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
