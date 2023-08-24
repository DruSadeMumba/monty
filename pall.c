#include "monty.h"
/**
 * pall - print value from that start of stack
 * @stack: pointer to the first node
 * @line: return nothing
 */
void pall(stack_t **stack, unsigned int line)
{
	stack_t *m;

	(void)line;
	m = *stack;
	if (!m)
		return;
	while (m)
	{
		printf("%d\n", m->n);
		m = m->next;
	}
}
