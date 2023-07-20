#include "main.h"

/**
 * more_numbers - This function prints from 0 to 14 for 10 times
 *
 * Return : count from 1 to 14 10 times
 */

void more_numbers(void)
{
	int count_num, count_lines;

	for (count_lines = 0; count_lines <= 9; count_lines++)
	{
		for (count_num = 0; count_num <= 14; count_num++)
			printf("%i", count_num);
		_putchar('\n');
	}
	_putchar('\n');
}
