#include "lists.h"

/**
 * free_dlistint - free list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = NULL;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
