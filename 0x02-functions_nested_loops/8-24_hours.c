#include "main.h"
#include <stdlib.h>

/**
 * jack_bauer - Checks if a character is lowercase.
 *
 * Return: abs(int).
*/
void jack_bauer(void)
{
	int hr, mi;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mi = 0; mi <= 59; mi++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mi / 10) + '0');
			_putchar((mi % 10) + '0');
			_putchar('\n');
		}
	}
}
