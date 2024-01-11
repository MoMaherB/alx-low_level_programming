#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node.
 *
 * Return: pointer to index, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *counter;
	unsigned int count = 0, idx, i = 0;

	if (head == NULL)
		return (NULL);

	counter = temp = head;

	while (counter != NULL)
	{
		count++;
		counter = counter->next;
	}
	idx = count - 1;

	if (index > idx)
		return (NULL);

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
