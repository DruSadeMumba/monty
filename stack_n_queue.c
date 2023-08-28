#include "monty.h"

/**
 * stacks - front of the queue becomes the top of the stack
 * @top: pointer
 * @line: line num
 */
void stacks(stack_t **top, unsigned int line)
{
	(void)top;
	(void)line;
	data_set.value = 0;
}

/**
 * queue - top of the stack becomes the front of the queue
 * @top: pointer
 * @line: line num
 */
void queue(stack_t **top, unsigned int line)
{
	(void)top;
	(void)line;
	data_set.value = 1;
}
