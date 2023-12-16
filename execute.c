#include "monty.h"
/**
  * execute - Starting of tokenize and execution
  * @parsed: string of strings that involve the arguments in the line
  * @line_c: line counter
  * @file: file
  * @stack: stack
  * Return: int
*/
int execute(stack_t **stack, unsigned int line_c)
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

	for (i = 0; ops[i].opcode && inf.parsed[0] != NULL; i++)
	{
		if (strcmp(inf.parsed[0], ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_c);
			return (0);
		}
	}

	if (inf.parsed[0] && ops[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_c, inf.parsed[0]);
		fclose(inf.file);
		free_s(*stack);
		free(inf.parsed);
		exit(EXIT_FAILURE);
	}
	return (1);
}
