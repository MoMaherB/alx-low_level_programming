#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  number of elements in a linked list
 * @h: the pointer to the list_t
 *
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
