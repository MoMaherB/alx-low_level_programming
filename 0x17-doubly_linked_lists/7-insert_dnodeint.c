#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index.
 * @h: pointer to a pointer to the head of the doubly linked list.
 * @idx: index at which the new node should be inserted.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if the insertion fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, i = 0;
	dlistint_t *counter, *temp, *newnode;

	counter = *h;
	while (counter != NULL)
	{
		count++;
		counter = counter->next;
	}

	if (idx > count)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == count)
		return (add_dnodeint_end(h, n));

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	temp = *h;

	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	temp->prev->next = newnode;
	newnode->prev = temp->prev;
	newnode->next = temp;
	temp->prev = newnode;

	return (newnode);
}
