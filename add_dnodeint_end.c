#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: pointer
 * @n: value
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (!head || !new)
		return (NULL);

	new->n = n;

	if (!*head)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	h = *head;
	while (h->next)
		h = h->next;
	new->next = NULL;
	new->prev = h;
	h->next = new;

	return (new);
}
