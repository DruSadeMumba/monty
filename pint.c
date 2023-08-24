#include "monty.h"
/**
 * pint - print value of the first node
 * @stack: pointer to the first node
 * @line: line to be printed
 */

void pint(stack_t **stack, unsigned int line)
{
	stack_t *first_node = *stack;

	if (first_node == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line);
		fclose(data_set.file);
		free(data_set.inside);
		stack_free(first_node);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", first_node->n);
}
