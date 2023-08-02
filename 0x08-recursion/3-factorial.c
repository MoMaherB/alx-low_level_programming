#include "main.h"

/**
 * factorial - Returns factorial of any number
 * @n: The string whose length needs to be calculated.
 *
 * Return: The length of the string.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
