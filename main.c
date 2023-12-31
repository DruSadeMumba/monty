#include "monty.h"

value_t data_set = {NULL, NULL, NULL, 0};
/**
 * main - the main program for monty
 * @argc: count arguments passed to the program
 * @argv: the pointer to passed argument
 * Return: Always return 1 on success
 */

int main(int argc, char *argv[])
{
	FILE *file_from_ter;
	ssize_t read_length = 1;
	size_t buffe_size = 0;
	char *read_content;
	unsigned int line = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_from_ter = fopen(argv[1], "r");
	data_set.file = file_from_ter;

	if (!file_from_ter)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (read_length > 0)
	{
		read_content = NULL;
		read_length = getline(&read_content, &buffe_size, file_from_ter);
		data_set.inside = read_content;
		line++;

		if (read_length > 0)
			exec_func(read_content, &stack, line, file_from_ter);
		free(read_content);
	}
	stack_free(stack);
	fclose(file_from_ter);
	return (0);
}
