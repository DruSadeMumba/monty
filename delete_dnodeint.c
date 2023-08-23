#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer
 * @index: position
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = h->next;
		if (*head)
			(*head)->prev = NULL;
		free(h);
		return (1);
	}
	for (; h && i < index; i++)
		h = h->next;
	if (!h)
		return (-1);
	if (h->prev)
		h->prev->next = h->next;
	if (h->next)
		h->next->prev = h->prev;
	free(h);
	return (1);
}
