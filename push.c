#include "lists.h"
/**
 * push_err - push err
 * @stack: pointer
 * @line: line number
 */
void push_err(stack_t **stack, unsigned int line)
{
	fprintf(stderr, "L%d: usage: push integer\n", line);
	fclose(data_set.file);
	free(data_set.inside);
	stack_free(*stack);
	exit(EXIT_FAILURE);
}

/**
 * push - pushing a node to the stack
 * @stack: pointer to the first node
 * @line: line on which push was found
 */
void push(stack_t **stack, unsigned int line)
{
	int data;
	int i = 0, flag = 0;

	if (data_set._args && data_set._args[0] != '\0')
	{
		if (data_set._args[0] == '-' || isdigit(data_set._args[0]))
			i++;
		for (; data_set._args[i] != '\0'; i++)
		{
			if (data_set._args[i] > 57 || data_set._args[i] < 48)
				flag = 1;
		}
		if (flag == 1)
			push_err(stack, line);
	} else
		push_err(stack, line);
	data = atoi(data_set._args);
	if (data_set._args == 0)
		add_node(stack, data);
	else
		add_node_end(stack, data);
}
