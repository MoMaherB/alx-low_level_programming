#include "main.h"

/**
 * malloc_checked
 *
 *@b: unsigened int
 *Return:
 */

void *malloc_checked(unsigned int b)
{
	void *size = malloc(b);

	if (size == NULL)
	{
		exit(98);
	}
	else
	{
		return (size);
	}
