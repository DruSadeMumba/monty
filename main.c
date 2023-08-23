#include "monty.h"
/**
 *  * main - the main program for monty
 *   * @argc: count arguments passed to the program
 *    * @argv: the pointer to passed argument
 *     * Return: Always return 1 on success
 *     **/

int main(int argc, char **argv)
{
	FILE *file_from_ter;
	ssize_t read_length = 1;
	size_t buffe_size = 0;
	char *read_content = NULL;
	unsigned int line = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(1);
	}

	file_from_ter = fopen(argv[1], "r");

	if (file_from_ter == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(1);
	}

	while (read_length > 0)
	{
		read_length = getline(&read_content, &buffe_size, file_from_ter);
		line++;
		data_set.inside = read_content;

		if (read_length > 0)
		{
			/**code for execution*/
		}

		free(read_content);

	}
	/*core for freeing memory*/
	fclose(file_from_ter);
	return (0);

}
