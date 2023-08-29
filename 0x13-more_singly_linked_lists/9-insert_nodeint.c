#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node in a given
 * position in linked list
 * @head: points to first node
 * @idx: index to the added new node
 * @n: data to the new node
 *
 * Return: pointer to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
