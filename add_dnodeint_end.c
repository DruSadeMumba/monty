#include "monty.h"

/**
 * add_dnodeint_end - add node at end
 * @head: pointer
 * @n: value
 * Return: address
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *new, *h;

	new = malloc(sizeof(stack_t));
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
