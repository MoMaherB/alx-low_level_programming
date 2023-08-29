#include "lists.h"

/**
 * get_nodeint_at_index - return node at a specifec index in the linked list
 * @head: points to first node
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *tem = head;

	while (tem && num < index)
	{
		tem = tem->next;
		num++;
	}

	return (tem ? tem : NULL);
}
