#include "main.h"

/**
 * print_last_digit - Checks if a character is lowercase.
 *
 * @n: The character to be checked.
 *
 * Return: last number.
*/
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = -1 * (n % 10);
	else
		digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}
