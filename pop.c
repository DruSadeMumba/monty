#include "monty.h"
/**
 *  * pop - removing node from stack
 *   * @stack: pointer to the first node
 *    * @line: line to be printed
 *    **/

void pop(stack_t **stack, unsigned int line)
{
	stack_t *first_node = *stack;

	if (first_node == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		fclose(data_set.file);
		free(data_set.inside);
		stack_free(first_node);
		exit(EXIT_FAILURE);
	}

	*stack = first_node->next;
	free(first_node);
}
