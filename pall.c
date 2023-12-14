#include "monty.h"
/**
  * _pall - prints all values from top
  * @stack: the stack
  * @line_c: counter
  * Return: void
 */
void _pall(stack_t **stack, unsigned int line_c)
{
	stack_t *ptr = *stack;

	if (ptr == NULL)
	return;

	while (ptr && ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	while (ptr && ptr->prev != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->prev;
	}
	printf("%d\n", ptr->n);
	(void) line_c;
}
