#include "lists.h"

/**
 * sum_listint - sum of all the data in linked list
 * @head: points to first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tem = head;

	while (tem)
	{
		sum += tem->n;
		tem = tem->next;
	}

	return (sum);
}
