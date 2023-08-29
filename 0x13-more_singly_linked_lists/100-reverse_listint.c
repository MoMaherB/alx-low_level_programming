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
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}

	*head = before;

	return (*head);
}
