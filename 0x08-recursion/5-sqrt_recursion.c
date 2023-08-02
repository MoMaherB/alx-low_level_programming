#include "main.h"

/**
 * _sqrt_helper - Recursive helper function to find the natural square root.
 * @n: The number whose square root needs to be calculated.
 * @low: The lower bound of the search range.
 * @high: The upper bound of the search range.
 *
 * Return: The natural square root of 'n', or -1 if not found.
 */

int _sqrt_helper(long int n, int low, long int high)
{
	long int mid = 0;
	long int midSquared = 0;

	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;
	midSquared = mid * mid;

	if (midSquared == n)
	{
		return (mid);
	}
	else if (midSquared < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
}
/**
 * _sqrt_recursion - Recursive function to calculate the
 * natural square root of a number.
 * @n: The number whose square root needs to be calculated.
 *
 * Return: The natural square root of 'n', or -1 if not found.
 */
int _sqrt_recursion(long int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0, n));
}
