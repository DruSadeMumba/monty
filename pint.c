#include "monty.h"
/**
 *  * pint - print value of the first node
 *   * @handler: pointer to the first node
 *    * @line: line to be printed
 *    **/

void pint(stack_handler *handler, unsigned int line)
{
	stack_t *first_node = handler->top;

	if (first_node == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line);
		fclose(data_set.file);
		free(data_set.inside);
		stack_free(handler->top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", first_node->n);
}
