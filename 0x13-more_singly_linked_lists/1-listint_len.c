#include "lists.h"

/**
 * listint_len - number of the elements in thw linked lists
 * @h: type listint_t to traverse linked list
 *
 * Return: num of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
