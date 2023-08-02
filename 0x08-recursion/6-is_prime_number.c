#include "main.h"

/**
 * is_divisible - Recursive helper function to
 * check if n is divisible by 'div'.
 * @n: The number to check for divisibility.
 * @div: The divisor to check against.
 *
 * Return: 1 if n is divisible by div, otherwise 0.
 */

int is_divisible(int n, int div)
{
	if (div == 1)
	{
		return (0);
	}

	if (n % div == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, div - 1));
	}
}

/**
 * is_prime_number - Recursive function to check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (!is_divisible(n, n - 1));
}
