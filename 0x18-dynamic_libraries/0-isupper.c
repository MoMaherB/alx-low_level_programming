#include "main.h"
#include <ctype.h>

/**
 * _isupper - This function to know is the parameter is digit or not
 *
 * @c: This parameter of the digit
 *
 * Return: (1) if isupper and (0) otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
