#include "main.h"

/**
 * get_bit - return value of a bit in  decimal
 * @n: searched num
 * @index: place of bit
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
