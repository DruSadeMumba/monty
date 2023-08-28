#include "monty.h"

/**
 * pint - print value of the first node
 * @stack: pointer to the first node
 * @line: line to be printed
 */

void pint(stack_t **stack, unsigned int line)
{
	stack_t *first_node = *stack;

	if (!first_node)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line);
		op_err(stack);
	}
	printf("%d\n", first_node->n);
}
