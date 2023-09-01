#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned intger
 * @b: str with  binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int cont;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (cont = 0; b[cont]; cont++)
	{
		if (b[cont] < '0' || b[cont] > '1')
			return (0);
		dec = 2 * dec + (b[cont] - '0');
	}

	return (dec);
}
