#include "lists.h"
/**
*free_dlistint - Frees a doubly linked list
*@head: pointer to the head of the doubly linked list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
