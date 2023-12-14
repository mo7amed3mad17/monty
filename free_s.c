#include "monty.h"
/**
  * free_s - free
  * @stack: stack
  * Return: void
 */
void free_s(stack_t *stack)
{
	stack_t *ptr = stack;

	while (stack)
	{
		ptr = stack->next;
		free(stack);
		stack = ptr;
	}
}
