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
	/*free*/
	exit(EXIT_FAILURE);
}
