#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: points to first node
 *
 * Return: first node in the new list pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->after;
		(*head)->after = before;
		before = *head;
		*head = after;
	}

	*head = before;

	return (*head);
}
