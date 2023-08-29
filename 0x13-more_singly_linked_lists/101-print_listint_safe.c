#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Count number of nodes
 * in a looped linked list.
 * @head: points to head of the listint_t
 *
 * Return: If the list is not looped - 0.
 * Otherwise -number of unique nodes in list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *here;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	here = (head->next)->next;

	while (here)
	{
		if (tort == here)
		{
			tort = head;
			while (tort != here)
			{
				nodes++;
				tort = tort->next;
				here = here->next;
			}

			tort = tort->next;
			while (tort != here)
			{
				nodes++;
				tort = tort->next;
			}

			return (nodes);
		}

		tort = tort->next;
		here = (here->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints safly a list.
 * @head: points to the head of the listint_t list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
