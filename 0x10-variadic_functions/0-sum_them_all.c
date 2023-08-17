#include "variadic_functions.h"

/**
 * sum_them_all - the function that add any numbers the users enter
 *@n: the count
 *
 * Return: 0 or the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, num, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
