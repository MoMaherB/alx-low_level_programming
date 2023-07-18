#include "main.h"
#include <ctype.h>

/**
 * print_sign - Checks of sign of numer if -ve , +ve or 0
 *
 * @n: The numer to be checked.
 *
 * Return: "+" if n is +ve, "-" if n is -ve, 0 otherwise.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
