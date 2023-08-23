#include "monty.h"
/**
 *  * pop - removing node from stack
 *   * @handler: pointe to the first node
 *    * @line: line to be printed
 *    **/

void pop(stack_handler *handler, unsigned int line)
{
	stack_t *first_node = handler->top;

	if (first_node == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		fclose(data_set.file);
		free(data_set.inside);
		stack_free(handler);
		exit(EXIT_FAILURE);
	}

	handler->top = first_node->next;
	free(first_node);
}
