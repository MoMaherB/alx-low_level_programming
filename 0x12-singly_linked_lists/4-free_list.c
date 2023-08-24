#include <stdlib.h>
#include "lists.h"

/**
 * free_list - make linked list free
 * @head: list_t th freed list
 *
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
