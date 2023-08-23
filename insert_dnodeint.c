#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node
 * @h: pointer
 * @idx: position
 * @n: value
 * Return: address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head;
	unsigned int i;

	head = *h;
	new = malloc(sizeof(dlistint_t));
	if (!h || !new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; head && i < idx - 1; i++)
		head = head->next;
	if (!head)
	{
		free(new);
		return (NULL);
	}

	new->next = head->next;
	new->prev = head;
	if (head->next)
		head->next->prev = new;
	head->next = new;
	return (new);
}
