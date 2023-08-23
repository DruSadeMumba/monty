#include "monty.h"
/**
 *  * pall - print value from that start of stack
 *   * @handler: pointer to the first node
 *    * @line: return nothing
 *    **/
void pall(stack_handler *handler, unsigned int line)
{
	stack_t *m;
	(void)line;

	m = handler->top;
	while (m != NULL)
	{
		printf("%d\n", m->n);
		m = m->next;
	}
}
