#include "monty.h"
stack_t *stack = NULL;
char **parsed = NULL;
FILE *file;
/**
  * main - The main Entry of the program
  * @argc: The num of arg
  * @argv: The args
  * Return: int
 */
int main(int argc, char **argv)
{
	char line[128];
	unsigned int line_c = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		line_c++;
		parsed = parse_line(line);
		execute(&stack, parsed, line_c, file);
		free(parsed);
	}
	free_s(stack);
	fclose(file);
	return (0);
}
