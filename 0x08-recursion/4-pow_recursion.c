#include "main.h"

/**
 * _pow_recursion - Returns factorial of any number
 * @x: The number
 * @y: the power of the number
 * Return: The power.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
