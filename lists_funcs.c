#include "monty.h"

/**
 * add_dnodeint - add node at beginning
 * @head: pointer
 * @n: node value
 * Return: address
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!head || !new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}

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

/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer
 * @index: position
 * Return: 1
 */
int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	stack_t *h = *head;
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

/**
 * dlistint_len - count num of elements
 * @h: pointer
 * Return: num of elems
 */
size_t dlistint_len(const stack_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}

/**
 * get_dnodeint_at_index - get node
 * @head: pointer
 * @index: node index
 * Return: node
 */
stack_t *get_dnodeint_at_index(stack_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);
	return (NULL);
}
