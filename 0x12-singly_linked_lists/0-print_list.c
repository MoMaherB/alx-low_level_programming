#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all
 * @h: pointer to list_t
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t sT = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sT++;
	}

	return (sT);
}
