#include "main.h"
#include <limits.h>

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

}	return (size);
