#include "monty.h"
/**
  * free_s - free
  * @stack: stack
  * Return: void
 */
void free_s(stack_t *head)
{
	stack_t *ptr = head;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
