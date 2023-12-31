#include "monty.h"

/**
 * nop - does nothing
 * @top: pointer
 * @line: line in file
 */
void nop(stack_t **top, unsigned int line)
{
	(void)top;
	(void)line;
}

/**
 * malloc_fail - malloc err msg
 */
void malloc_fail(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * op_err - err handler
 * @stack: pointer
 */
void op_err(stack_t **stack)
{
	fclose(data_set.file);
	free(data_set.inside);
	stack_free(*stack);
	exit(EXIT_FAILURE);
}

/**
 * push_err - push err
 * @stack: pointer
 * @line: line number
 */
void push_err(stack_t **stack, unsigned int line)
{
	fprintf(stderr, "L%d: usage: push integer\n", line);
	op_err(stack);
}
