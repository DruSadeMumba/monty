#include "lists.h"

/**
 * pchar - print char
 * @top: pointer
 * @line: line number
 */
void pchar(stack_t **stack, unsigned int line)
{
	stack_t *top;

	top = *stack;
	if (!top)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
		/*free*/
		exit(EXIT_FAILURE);
	}
	if (top->n < 0 || top->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
		/*free*/
		exit(EXIT_FAILURE);
	}
	printf("%c\n", top->n);
}

/**
 * pstr - print str
 * @top: pointer
 * @line: line number
 */
void pstr(stack_t **stack, unsigned int line)
{
	stack_t *top;

	top = *stack;
	(void)line;
	if (!top)
	{
		printf("\n");
		return;
	}
	while (top)
	{
		if (top->n > 0 || top->n <= 127)
		{
			printf("%c", top->n);
			top = top->next;
		}
		else
			break;
	}
	printf("\n");
}
