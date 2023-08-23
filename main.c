#include "monty.h"
/**
 * main - the main program for monty
 * @argc: count arguments passed to the program
 * @argv: the pointer to passed argumen
 * Return: Always return 0
 **/
int main(int argc, char **argv)
{
FILE *file_from_ter;
ssize_t read_length;
size_t buffer_size = 0;
char *read_content = NULL;
unsigned int line = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

file_from_ter = fopen(argv[1], "r");

if (file_from_ter == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while ((read_length = getline(&read_content,
&buffer_size, file_from_ter)) > 0)
{
line++;
data_set.inside = read_content;

/***
* Execute the content
*/
free(read_content);
read_content = NULL;
}
/**
* Free_stack
*/
fclose(file_from_ter);
return (0);
}

