#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
