#include "monty.h"
/**
 *  * add_node - add node the stack
 *   * @handler: pointer to the first node
 *    * @n: data to be added
 *    **/
void add_node(stack_handler *handler, int n)
{
	stack_t *node_to_be = malloc(sizeof(stack_t));

	if (node_to_be == NULL)
	{
		printf("Error\n");
		exit(0);
	}

	node_to_be->n = n;
	node_to_be->prev = NULL;
	node_to_be->next = handler->top;

	if (handler->top)
		handler->top->prev = node_to_be;

	handler->top = node_to_be;
}
