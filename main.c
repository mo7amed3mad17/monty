#include "monty.h"
info_t inf = {NULL, NULL};
/**
  * main - The main Entry of the program
  * @argc: The num of arg
  * @argv: The args
  * Return: int
 */
int main(int argc, char **argv)
{
	char line[128];
	stack_t *stack = NULL;
	unsigned int line_c = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	inf.file = fopen(argv[1], "r");
	if (!inf.file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), inf.file) != NULL)
	{
		line_c++;
		inf.parsed = parse_line(line);
		execute(&stack, line_c);
		free(inf.parsed);
	}
	free_s(stack);
	fclose(inf.file);
	return (0);
}
