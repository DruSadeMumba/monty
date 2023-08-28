#include "monty.h"

/**
 * swap - swapping two elements
 * @handler: pointer to the first element
 * @line: line to be printed
 */

void swap(stack_t **stack, unsigned int line)
{
	stack_t *head;
	int temp;

	head = *stack;

	if (!head || !head->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		op_err(stack);
	}

	temp = head->n;
	head->n = head->next->n;
	head->next->n = temp;
}
