#include "monty.h"

/**
 * add - add two ints
 * @top: pointer
 * @line: line number
 */
void add(stack_handler *top, unsigned int line)
{
	int num = 0, sum = 0;
	stack_handler *new, *pos0, *pos1;

	new = NULL;
	pos0 = get_dnodeint_at_index(*top, 0);
	pos1 = get_dnodeint_at_index(*top, 1);

	while (top)
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
	delete_dnodeint_at_index(top, 0);
	delete_dnodeint_at_index(top, 1);
	new = add_dnodeint(top, sum);

	if (!new)
		malloc_fail();
}

/**
 * sub - subtract two ints
 * @top: pointer
 * @line: line number
 */
void sub(stack_handler *top, unsigned int line)
{
	int num = 0, diff = 0;
	stack_handler *new, *pos0, *pos1;

	new = NULL;
	pos0 = get_dnodeint_at_index(*top, 0);
	pos1 = get_dnodeint_at_index(*top, 1);

	while (top)
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
	diff = pos0->n - pos1->n;
	delete_dnodeint_at_index(top, 0);
	delete_dnodeint_at_index(top, 1);
	new = add_dnodeint(top, sum);

	if (!new)
		malloc_fail();
}

/**
 * div - divide two ints
 * @top: pointer
 * @line: line number
 */
void div(stack_handler *top, unsigned int line)
{
	int num = 0, div = 0;
	stack_handler *new, *pos0, *pos1;

	new = NULL;
	pos0 = get_dnodeint_at_index(*top, 0);
	pos1 = get_dnodeint_at_index(*top, 1);

	while (top)
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
	div = pos0->n / pos1->n;
	delete_dnodeint_at_index(top, 0);
	delete_dnodeint_at_index(top, 1);
	new = add_dnodeint(top, sum);

	if (!new)
		malloc_fail();
}

/**
 * mul - multipy two ints
 * @top: pointer
 * @line: line number
 */
void mul(stack_handler *top, unsigned int line)
{
	int num = 0, prod = 0;
	stack_handler *new, *pos0, *pos1;

	new = NULL;
	pos0 = get_dnodeint_at_index(*top, 0);
	pos1 = get_dnodeint_at_index(*top, 1);

	while (top)
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
	delete_dnodeint_at_index(top, 0);
	delete_dnodeint_at_index(top, 1);
	new = add_dnodeint(top, sum);

	if (!new)
		malloc_fail();
}

/**
 * mod - get remainder of dividing two ints
 * @top: pointer
 * @line: line number
 */
void mod(stack_handler *top, unsigned int line)
{
	int num = 0, mod = 0;
	stack_handler *new, *pos0, *pos1;

	new = NULL;
	pos0 = get_dnodeint_at_index(*top, 0);
	pos1 = get_dnodeint_at_index(*top, 1);

	while (top)
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
	mod = pos0->n % pos1->n;
	delete_dnodeint_at_index(top, 0);
	delete_dnodeint_at_index(top, 1);
	new = add_dnodeint(top, sum);

	if (!new)
		malloc_fail();
}
