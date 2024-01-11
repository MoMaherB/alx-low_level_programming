#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at a given index.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 * Return: 1 if the deletion was successful, -1 if the deletion fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *counter;
	unsigned int count = 0, i = 0;

	if (*head == NULL)
		return (-1);
	counter = temp = *head;
	while (counter != NULL)
	{
		count++;
		counter = counter->next;
	}
	if (index >= count)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			i++;
		}
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);
	}
	return (1);
}
