#include "monty.h"
/**
 *  * add_node - add node the stack
 *   * @stack: pointer to the first node
 *    * @data: data to be added
 *    **/
void add_node(stack_t **stack, int data)
{
	stack_t *node_to_be, *temp;

	temp = *stack;
	node_to_be = malloc(sizeof(stack_t));
	if (node_to_be == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
		temp->prev = node_to_be;
	node_to_be->n = data;
	node_to_be->next = *stack;
	node_to_be->prev = NULL;
	*stack = node_to_be;
}

/**
 * add_node_end - add node
 * @stack: pointer
 * @data: line num
 */
void add_node_end(stack_t **stack, int data)
{
	stack_t *new, *temp;

	temp = *stack;
	new = malloc(sizeof(stack_t));
	if (!new)
		printf("Error\n");
	new->n = data;
	new->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*stack = new;
		new->prev = NULL;
	} else
	{
		temp->next = new;
		new->prev = temp;
	}
}
