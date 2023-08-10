#include "main.h"
#include <string.h>

/**
 * _calloc - The function
 *
 *@nmemb: unsigened int
 *@size: somthoig
 *Return: NULL or size
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *allocated_memory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	allocated_memory = malloc(total_size);

	if (allocated_memory != NULL)
	{
		memset(allocated_memory, 0, total_size);
	}

	return (allocated_memory);
}
