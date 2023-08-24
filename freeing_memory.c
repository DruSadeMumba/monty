#include "monty.h"
/**
 *  * free_stack - freeing up the stack given
 *   * @handler: pointer to the first node
 *   **/
void stack_free(stack_handler *handler)
{
	stack_t *head = handler->top;
	stack_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	handler->top = NULL;
}
