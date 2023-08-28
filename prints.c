#include "monty.h"

/**
 * pchar - print char
 * @stack: pointer
 * @line: line number
 */
void pchar(stack_t **stack, unsigned int line)
{
	stack_t *top;

	top = *stack;
	if (!top)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		op_err(stack);
	}
	if (top->n < 0 || top->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
		op_err(stack);
	}
	printf("%c\n", top->n);
}

/**
 * pstr - print str
 * @stack: pointer
 * @line: line number
 */
void pstr(stack_t **stack, unsigned int line)
{
	stack_t *top;

	top = *stack;
	(void)line;
	while (top)
	{
		if (top->n <= 0 || top->n > 127)
			break;
		printf("%c", top->n);
		top = top->next;
	}
	printf("\n");
}
