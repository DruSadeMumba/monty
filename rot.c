#include "lists.h"

/**
 * rotl - rotates the stack to the top
 * @stack: pointer
 * @line: line number
 */
void rotl(stack_t **stack, unsigned int line)
{
	int num = 0;
	stack_t *top;

	(void)line;
	top = *stack;
	if (!*stack)
		return;
	top = get_dnodeint_at_index(*stack, 0);
	num = top->n;
	delete_dnodeint_at_index(stack, 0);
	add_dnodeint_end(stack, num);
}

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer
 * @line: line number
 */
void rotr(stack_t **stack, unsigned int line)
{
	int num = 0, len;
	stack_t *top;

	(void)line;
	len = dlistint_len(*stack);
	top = *stack;
	if (!*stack)
		return;
	top = get_dnodeint_at_index(*stack, len - 1);
	num = top->n;
	delete_dnodeint_at_index(stack, len - 1);
	add_dnodeint(stack, num);
}
