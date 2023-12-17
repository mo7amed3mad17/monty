#include "monty.h"
/**
  * _pall - prints all values from top
  * @stack: the stack
  * @line_c: counter
  * Return: void
 */
void _pall(stack_1 **head, unsigned int line_c)
{
	stack_1 *ptr = *head;

	if (ptr == NULL)
	return;

	while (ptr && ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	while (ptr && ptr->prev != NULL)
	{
		fprintf(stdout, "%d\n", ptr->n);
		ptr = ptr->prev;
	}
	fprintf(stdout , "%d\n", ptr->n);
	(void) line_c;
}
