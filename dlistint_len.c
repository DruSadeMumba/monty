#include "lists.h"

/**
 * dlistint_len - count num of elements
 * @h: pointer
 * Return: num of elems
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
