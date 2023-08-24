#include "lists.h"

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
		fclose(data_set.file);
		free(data_set.inside);
		stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	if (top->n < 0 || top->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
		fclose(data_set.file);
		free(data_set.inside);
		stack_free(*stack);
		exit(EXIT_FAILURE);
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
