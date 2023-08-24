#include "monty.h"
/**
 *  * push - pushing a node to the stack
 *   * @handler: pointer to the first node
 *    * @line: line on which push was found
 *    **/

void push(stack_handler *handler, unsigned int line)
{
	int data, i = 0;

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
					stack_free(handler);
					exit(EXIT_FAILURE);
				}
				i++;
			}

			data = atoi(data_set._args);
			add_node(handler, data);
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line);
			fclose(data_set.file);
			free(data_set.inside);
			stack_free(handler);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		fclose(data_set.file);
		free(data_set.inside);
		stack_free(handler);
		exit(EXIT_FAILURE);
	}
}
