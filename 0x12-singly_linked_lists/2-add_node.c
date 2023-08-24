#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - at the beginning of a linked list add node
 * @head: Dublicate pointer to the list_t
 * @str: add in the node a new node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while (str[l])
		l++;

	new = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	new->str = strdup(str);
	new->len = l;
	new->next = (*head);
	(*head) = n;

	return (*head);
}
