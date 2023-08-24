#include "monty.h"
/**
 *  * free_stack - freeing up the stack given
 *   * @handler: pointer to the first node
 *   **/
void stack_free(stack_t *head)
{
	stack_t *temp;
	
	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
