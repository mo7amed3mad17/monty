#include "monty.h"
/**
  * _pint - print the top value
  * @stack: the stack
  * @line_c: counter
  * Return: void
 */
void _pint(stack_t **head, unsigned int line_c)
{
	stack_t *ptr = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_c);
		exit(EXIT_FAILURE);
	}

	while (ptr && ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	fprintf(stdout, "%d\n", ptr->n);
}
