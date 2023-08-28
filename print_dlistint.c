#include "monty.h"

/**
 * print_dlistint - print elements
 * @h: pointer
 * Return: num of elems
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num += 1;
	}
	return (num);
}
