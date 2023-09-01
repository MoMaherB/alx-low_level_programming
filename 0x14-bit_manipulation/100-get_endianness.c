#include "main.h"

/**
 * get_endianness - checks a machine is little or big
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ch = (char *) &n;

	return (*ch);
}
