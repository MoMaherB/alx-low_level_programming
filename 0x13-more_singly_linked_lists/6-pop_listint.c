#include "lists.h"

/**
 * pop_listint - delete  head node of the linked list
 * @head: points to first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (number);
}
