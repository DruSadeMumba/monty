#include "monty.h"
/**
 *  * swap - swapping two elements
 *   * @handler: pointer to the first element
 *    * @line: line to be printed
 *    **/

void swap(stack_t **handler, unsigned int line)
{
	stack_t *head;
	int temp;

	head = *handler;

	if (head == NULL || head->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		fclose(data_set.file);
		free(data_set.inside);
		stack_free(*handler);
		exit(EXIT_FAILURE);
	}

	temp = head->n;

	head->n = head->next->n;
	head->next->n = temp;
}
