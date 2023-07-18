#include "main.h"

/**
 * print_alphabet - do somthing
 *
*/

void print_alphabet_x10(void)
{
	for (int i = 0, i <= 10 ; i++)
	{
		for (char ch = 'a';ch <='z'; ch++)
		{
			_putchar(ch);

		}
		_putchar('\n');
	}
}
