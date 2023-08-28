#include "monty.h"

/**
 * stack_free - freeing up the stack given
 * @head: pointer to the first node
 */
void stack_free(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
