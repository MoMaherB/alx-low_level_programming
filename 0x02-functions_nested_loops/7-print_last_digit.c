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

	digit = n % 10;
	_putchar(digit);
	return (digit);
}
