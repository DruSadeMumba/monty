#include "lists.h"

/**
 * adds - add two ints
 * @top: pointer
 * @line: line number
 */
void adds(stack_t **stack, unsigned int line)
{
	int num = 0, sum = 0;
	stack_t *new, *pos0, *pos1,*top;
	
	top = *stack;
	new = NULL;
	pos0 = get_dnodeint_at_index(*stack, 0);
	pos1 = get_dnodeint_at_index(*stack, 1);

	while (*stack)
	{
		top = top->next;
		num++;
	}
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line);
		/*free*/
		exit(EXIT_FAILURE);
	}
	sum = pos0->n + pos1->n;
	delete_dnodeint_at_index(stack, 0);
	delete_dnodeint_at_index(stack, 0);
	new = add_dnodeint(stack, sum);

	if (!new)
		malloc_fail();
}

/**
 * subs - subtract two ints
 * @top: pointer
 * @line: line number
 */
void subs(stack_t **stack, unsigned int line)
{
	int num = 0, diff = 0;
	stack_t *new, *pos0, *pos1, *top;

	top = *stack;
	new = NULL;
	pos0 = get_dnodeint_at_index(*stack, 0);
	pos1 = get_dnodeint_at_index(*stack, 1);

	while (*stack)
	{
		top = top->next;
		num++;
	}
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line);
		/*free*/
		exit(EXIT_FAILURE);
	}
	diff = pos1->n - pos0->n;
	delete_dnodeint_at_index(stack, 0);
	delete_dnodeint_at_index(stack, 0);
	new = add_dnodeint(stack, diff);

	if (!new)
		malloc_fail();
}

/**
 * divs - divide two ints
 * @top: pointer
 * @line: line number
 */
void divs(stack_t **stack, unsigned int line)
{
	int num = 0, div = 0;
	stack_t *new, *pos0, *pos1, *top;

	top = *stack;
	new = NULL;
	pos0 = get_dnodeint_at_index(*stack, 0);
	pos1 = get_dnodeint_at_index(*stack, 1);

	while (*stack)
	{
		top = top->next;
		num++;
	}
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line);
		/*free*/
		exit(EXIT_FAILURE);
	}
	if (pos0->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line);
		/*free*/
		exit(EXIT_FAILURE);
	}
	div = pos0->n / pos1->n;
	delete_dnodeint_at_index(stack, 0);
	delete_dnodeint_at_index(stack, 0);
	new = add_dnodeint(stack, div);

	if (!new)
		malloc_fail();
}

/**
 * muls - multipy two ints
 * @top: pointer
 * @line: line number
 */
void muls(stack_t **stack, unsigned int line)
{
	int num = 0, prod = 0;
	stack_t *new, *pos0, *pos1, *top;

	top = *stack;
	new = NULL;
	pos0 = get_dnodeint_at_index(*stack, 0);
	pos1 = get_dnodeint_at_index(*stack, 1);

	while (*stack)
	{
		top = top->next;
		num++;
	}
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line);
		/*free*/
		exit(EXIT_FAILURE);
	}
	prod = pos0->n * pos1->n;
	delete_dnodeint_at_index(stack, 0);
	delete_dnodeint_at_index(stack, 0);
	new = add_dnodeint(stack, prod);

	if (!new)
		malloc_fail();
}

/**
 * mods - get remainder of dividing two ints
 * @top: pointer
 * @line: line number
 */
void mods(stack_t **stack, unsigned int line)
{
	int num = 0, mod = 0;
	stack_t *new, *pos0, *pos1, *top;
	
	top = *stack;
	new = NULL;
	pos0 = get_dnodeint_at_index(*stack, 0);
	pos1 = get_dnodeint_at_index(*stack, 0);

	while (*stack)
	{
		top = top->next;
		num++;
	}
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line);
		/*free*/
		exit(EXIT_FAILURE);
	}
	if (pos0->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line);
		/*free*/
		exit(EXIT_FAILURE);
	}
	mod = pos1->n % pos0->n;
	delete_dnodeint_at_index(stack, 0);
	delete_dnodeint_at_index(stack, 0);
	new = add_dnodeint(stack, mod);

	if (!new)
		malloc_fail();
}
