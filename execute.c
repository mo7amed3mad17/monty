#include "monty.h"
/**
  * execute - Starting of tokenize and execution
  * @parsed: string of strings that involve the arguments in the line
  * @line_c: line counter
  * @file: file
  * @stack: stack
  * Return: int
*/
int execute(stack_t **stack, char **parsed, unsigned int line_c, FILE *file)
{
	int i = 0;

	instruction_t ops[] = {
	{"push", _push},
	{"pall", _pall},
	{"pint", _pint},
	{"nop", _nop},
	{NULL, NULL}};

	/*if (strcmp(parsed[0], "push") == 0)
	{
		_push(stack, line_c, parsed[1]);
		return (0);
	}*/

	for (i = 0; ops[i].opcode && parsed[0] != NULL; i++)
	{
		if (strcmp(parsed[0], ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_c);
			return (0);
		}
	}

	if (parsed[0] && ops[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_c, parsed[0]);
		fclose(file);
		free_s(*stack);
		free(parsed);
		exit(EXIT_FAILURE);
	}
	return (1);
}
