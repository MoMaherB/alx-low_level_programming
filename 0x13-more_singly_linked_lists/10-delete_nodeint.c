#include "lists.h"

/**
 * delete_nodeint_at_index - delete node in the list in specifec index
 * @head: points to first node in the list
 * @index: index of the node to delete
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *here = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	here = temp->next;
	temp->next = here->next;
	free(here);

	return (1);
}
