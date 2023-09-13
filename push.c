#include "monty.h"

/**
 * push - pushing a node to the stack
 * @stack: pointer to the first node
 * @line: line on which push was found
 */
void push(stack_t **stack, unsigned int line)
{
	int data;
	int i = 0;

	if (!data_set._args || data_set._args[0] == '\0' ||
			(data_set._args[0] != '-' && !isdigit(data_set._args[0])))
		push_err(stack, line);
	while (data_set._args[i] != '\0')
	{
		if (isdigit(data_set._args[i]) || data_set._args[0] == 45)
			i++;
		else
			push_err(stack, line);
	}
	data = atoi(data_set._args);
	if (data_set.value == 0)
		add_dnodeint(stack, data);
	else
		add_dnodeint_end(stack, data);
}
