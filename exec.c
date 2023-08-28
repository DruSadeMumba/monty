#include "monty.h"

/**
 * exec_func - execute the opcode found in file
 * @inside: content read from file
 * @stack: top of the stack
 * @line: line to be printed from the file
 * @file: file to be read by monty intepreter
 * Return: execute the opcode
 */

int exec_func(char *inside, stack_t **stack, unsigned int line, FILE *file)
{
	char *op_code;
	unsigned int i = 0;
	instruction_t opst[] = {
		{"push", push}, {"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"add", add},
		{"nop", nop}, {"sub", sub}, {"div", divs},
		{"mul", mul}, {"mod", mod}, {"pchar", pchar},
		{"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr},
		{"queue", queue}, {"stack", stacks},
		{NULL, NULL}
	};

	(void)file;
	op_code = strtok(inside, " \n\t");

	if (op_code && op_code[0] == '#')
		return (0);
	data_set._args = strtok(NULL, " \n\t");

	while (opst[i].opcode && op_code)
	{
		if (strcmp(op_code, opst[i].opcode) == 0)
		{
			opst[i].f(stack, line);
			return (0);
		}
		i++;
	}
	if (op_code && !opst[i].opcode)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line, op_code);
		op_err(stack);
	}
	return (1);
}
