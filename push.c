#include "monty.h"
#include "lists.h"
/**
 *  * push - pushing a node to the stack
 *   * @stack: pointer to the first node
 *    * @line: line on which push was found
 *    **/

void push(stack_t **stack, unsigned int line)
{
	int data;
	int i = 0;

	if (data_set._args != NULL && data_set._args[0] != '\0')
	{
		if (data_set._args[0] == '-' || isdigit(data_set._args[0]))
		{
			while (data_set._args[i] != '\0')
			{
				if (!isdigit(data_set._args[i]))
				{
					fprintf(stderr, "L%d: usage: push integer\n", line);
					fclose(data_set.file);
					free(data_set.inside);
					stack_free(*stack);
					exit(EXIT_FAILURE);
				}
				i++;
			}

			data = atoi(data_set._args);
			add_node(stack, data);
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line);
			fclose(data_set.file);
			free(data_set.inside);
			stack_free(*stack);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		fclose(data_set.file);
		free(data_set.inside);
		stack_free(*stack);
		exit(EXIT_FAILURE);
	}
}
